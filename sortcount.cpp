int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, temp;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++){
        cin >> temp;
        arr[i] = temp;
    }
    
    
    
    for (int i = 0; i < 100; i++){
        int sum = 0;
        for (int j = 0; j < n; j++){
            if (i==arr[j]){
                sum += 1;
                if (sum > 0){
                    cout << i << " ";    
                }
            }
            
        }
        
        
    }

    
    
    return 0;
}