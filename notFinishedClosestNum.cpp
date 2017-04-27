#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, temp;
    cin >> n;
    int arr[n];
    int temp1 = arr[0];
    
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr[i] = temp;
        if (temp > temp1){
            temp1 = temp;
        }
    } 
    
    int val = 0;
    vector <int> v;
  
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++){
            if (abs((arr[i]-arr[j])) <= temp1) {
                if (arr[i]<arr[j]){
                    v.push_back(arr[i]);
                    v.push_back(arr[j]);
                    temp1 = abs((arr[i]-arr[j]));
                    val = arr[i];
                    
                    
                }  
            }
        }
    }
    
  sort(v.begin(),v.end());

    
 for (int i = 0; i < n; i++){
     if (abs((arr[i]-arr[i+1])) == temp1){
        cout << v[i] << v[i+1];    
     }
     
 }   
    
    
    /* for (int i = 0; i < v.size(); i++){
        int sum = 0;
        for (int j = 0; j < v.size(); j++){
            if (i==v[j]){
                sum += 1;
                if (sum > 0){
                    cout << i << " ";    
                }
            }
            
        }   
    }*/


    return 0;
}