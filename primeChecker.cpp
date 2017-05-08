#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;






int main() {
   
    int n, temp, sqrtN;
    cin >> n;
    
    bool prime;
    
    for(int i = 0; i < n; i++){
        cin >> temp;
        sqrtN = sqrt(temp);
        
        for(int j = sqrtN; j > 0; j--){
            if(temp%j == 0 && j != 1 || temp ==1){
                prime = false;
                j = 0;
            } else if (j == 1){  
                prime = true;
                continue;
            }
        }
        
        if (prime){
            cout << "Prime" << endl;    
        } else {
            cout << "Not prime" << endl;    
        }   
    }
    return 0;
}
