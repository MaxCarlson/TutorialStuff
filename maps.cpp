#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    int n, number;
    string name;
    unordered_map<int, string> classMap;
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> number >> name;
        classMap.emplace(number,name);
        
    }
    
    cin >> n; 
    for(int i = 0; i < n; i++){
        cin >> number;  
        cout << classMap[number] << endl;
    }
  
}