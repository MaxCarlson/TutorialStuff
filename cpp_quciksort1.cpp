#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void partition(vector <int>  ar) {
   //Partition and print 
    int equal = ar[0], equalT = 0;    
    vector <int> right, left;
    
    for (int i = 0; i <ar.size(); i++){
        if(ar[i]<equal){
            left.push_back(ar[i]);
        } else if (ar[i]>equal) {
            right.push_back(ar[i]);
        } else {
            equalT ++;
        }
    }
    
    for (int i = 0; i <left.size(); i++){
        cout << left[i] << " ";    
    }
    
    for (int i = 0; i <equalT; i++){
        cout << equal << " ";
    }
    
    for (int i = 0; i <right.size(); i++) {
        cout << right[i] << " ";
    }
       
    
    
    
}
int main(void) {
   vector <int>  _ar;
   int n;
   cin >> n;
    
     for(int _ar_i=0; _ar_i<n; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

   partition(_ar);
   
   return 0;
}