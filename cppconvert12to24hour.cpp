#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Input format 01:02:01PM << output 13:02:01 */ 
    int hours = 0, minutes = 0, seconds = 0;
    char tempChar;
    string dN;
    cin >> hours >> tempChar >> minutes >> tempChar >> seconds >> dN;
    
    
    if (dN == "PM" && hours < 12){
        hours += 12;
    }
    
    if (hours < 10){
        cout << 0 << hours << ":";
    }else if (hours == 12  && dN == "AM") {
        cout << 0 << 0 << ":";    
    }else{ 
        cout << hours << ":";
    }
    if (minutes < 10){
        cout << 0 << minutes << ":";
    }else {
        cout << minutes << ":";
    }
    if (seconds < 10){
        cout << 0 << seconds;
    }else {
        cout << seconds;
    }
    
    
    //cout << hours;
    return 0;
}