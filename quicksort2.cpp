#include <bits/stdc++.h>
using namespace std;

//void quickSort(vector <int> &arr) {
   // Complete this function
    
    
    
//}
void printVec (vector<int> v){

    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";        
    }
    cout << endl;
}  


vector <int> merge(vector<int> &l, vector<int> &r, int equal){
    
    l.push_back(equal);
    l.insert(l.end(), r.begin(), r.end());

    return l;
    
} 


void quickSort(vector <int>  &arr) {

    if(arr.size()<2){
        return;
    }
    
    int equal = arr[0];
    int equalT = 0; 
    vector <int> right, left;
    
    for (int i = 0; i <arr.size(); i++){
        if(arr[i]<equal){
            left.push_back(arr[i]);
        } else if (arr[i]>equal) {
            right.push_back(arr[i]);
        } else {
            equalT ++;
        }
    }
    
    quickSort(left);
    quickSort(right);
    
    arr = merge(left, right, equal);
    
    
    //printVec(arr);
    
    
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}   

   

int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }

    quickSort(arr);

    return 0;
}