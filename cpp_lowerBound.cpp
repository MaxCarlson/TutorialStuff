#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* For each query you have to print "Yes"(without the quotes)if the number is present and at which index(1-based) it is present separated by a space.
If the number is not present you have to print "No"(without the quotes) followed by the index of the next smallest number just greater than that number.
You have to output each query in a new line.*/


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int n, tempVal;
    cin >> n;
    vector<int> v;
    
    for (int i=0; i<n; i++){
        cin >> tempVal;
        v.push_back(tempVal);
    }
    
    int q;
    cin >> q;
    int arr[q];
    
    
    for (int i=0; i<q; i++){
        cin >> tempVal;
        arr[i] = tempVal;    
    }
    
    
    for (int i=0; i<q; i++){
        vector<int>::iterator low = lower_bound(v.begin(), v.end(), arr[i]);
        if (arr[i] == v[low - v.begin()]){
            cout << "Yes " << low - v.begin()+1 << endl;
        } else {
            cout << "No " << low - v.begin()+1 << endl;
        }
        
    }
    
    
    
    
    //cout << low;
    return 0;
}


/* inputs
8
1 1 2 2 6 9 9 15
4
1
4
9
15

 output 

Yes 1
No 5
Yes 6
Yes 8