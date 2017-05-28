#include <iostream>
#include <queue> 
using namespace std;

int main()
{
    int n, num;
    char temp;
    queue<int> q;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp == 'E'){
            cin >> num;
            q.push(num);
            cout << q.size() << endl;
        }
        else if (temp == 'D'){
            if(q.empty()){
                cout << -1 << " " << 0 << endl;
            } else{
                cout << q.front() << " ";
                q.pop();
                cout << q.size() << endl;
            }
        }
    }
    
    
    return 0;
}