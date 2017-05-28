#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> food;
    int n, temp, price;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp == 1){
            if(food.empty()){
                cout <<"No Food" << endl;
            } else{
                cout << food.top() << endl;
                food.pop();
            }    
        } else if(temp == 2){
            cin >> price;
            food.push(price);
        }
    }
    return 0;
}