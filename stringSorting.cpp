std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {

    int size = 0;
    string temp;
    vector<string> s;
    
    for(int i = 0; i < inputArray.size(); i++){
        temp = inputArray[i];    
        if(temp.size() > size){
                    size = inputArray[i].size();
            }
    }
    
    for(int i = 0; i < inputArray.size(); i++){
        temp = inputArray[i];
        if(temp.size() == size){
            s.push_back(inputArray[i]);
        }
    }
    
    return s;
    
    
}



int commonCharacterCount(std::string s1, std::string s2) {

    int len, len1;
    if(s1.size()>s2.size()){
        len = s1.size();
        len1 = s2.size();
    } else {
        len = s2.size();
        len1 = s1.size();
    }
    
    int counter = 0;
    
    for(int i = 0; i < len; i++){
         for(int j = 0; j < len1; j++){
             if(s1[i] == s2[j] && s1[i]!= NULL && s2[j] != NULL){
                 counter ++;
                 s1.erase(s1.begin()+i);
                 s2.erase(s2.begin()+j);
                 i -= 1;
                 j -= 1;
             }
         }
    }
     
return counter;   
 
}

bool isLucky(int n) {
    
    string number = to_string(n);
    
    int len = number.size();
   
    len /= 2;
    
    string first (number.begin(), number.begin() +len);
    string second (number, len, len);

    char a;
    int sum = 0, sum1 = 0, b;
    
    for(int i = 0; i < len; i++){
        a = first[i];
        b = a - '0';
        sum += b;
    }
    
    for(int i = 0; i < len; i++){
        a = second[i];
        b = a - '0';
        sum1 += b;
    }
    
    if(sum == sum1){
        return true;
    }
    return false;
  
}