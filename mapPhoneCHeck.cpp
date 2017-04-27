#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, number;
    string name;
    cin >> n;
    map<string, int> m;
    
    for (int i=0; i < n; i++){
        cin >> name >> number;
        m.insert(make_pair(name, number));
    }
    
    while(cin >> name){
        map<string,int>::iterator itr=m.find(name);
        if (itr != m.end()){
            cout << name << "=" << m[name] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    
    
    
    
    return 0;
}


/* input
3
sam 99912222
tom 11122222
harry 12299933
sam
edward
harry