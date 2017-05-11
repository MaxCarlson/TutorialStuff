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
