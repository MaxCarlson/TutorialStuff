#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int factorial(int n){
    
    if (n > 1){
        return n * factorial(n-1);
    } else {
        return n;   
        
    } 
    
} 

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    
    cout << factorial(n);
    
    
    return 0;
}