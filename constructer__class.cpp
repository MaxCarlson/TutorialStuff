#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;




///////////////////////////////////////////////////////////
	//Difference class Constructor
	//parameter (a int vector) takes an array of integers as a parameter and :
	//saves it to the elements instance variable
    Difference (vector<int> a) : elements(a){}; 
    
    void computeDifference(){  //Difference function for finding numbers with largest difference
        sort(elements.begin(), elements.end());    
        
        maximumDifference = abs(elements[0]-elements[elements.size()-1]);
    }

    //return maximumDifference
///////////////////////////////////////////////////////////

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
