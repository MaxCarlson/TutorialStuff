#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, tempVal0, sumP = 0, sumS = 0, sum;
    cin >> n; 
    int arr[n][n];
    
    for(int i = 0; i < n; i ++) {       //seed arr[n][n]
        for (int j = 0; j < n; j ++) {
            cin >> tempVal0;
            arr[i][j] = tempVal0;
        }
    }
    
    for(int i = 0; i < n; i++){
        sumP += arr[i][i];
    }
    
    int n1 = n;
    n1 -= 1;
    
    for (int i = 0; i < n; i++) {
        sumS += arr[n1][i];
        n1 -= 1;
    }
    
    sum = sumP-sumS;
    
    if (sum < 0) {
        sum *= -1;
    }
    
    
    cout << sum;
    return 0;
