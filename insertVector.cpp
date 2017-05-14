std::vector<int> sortByHeight(std::vector<int> a) {

    int size = a.size();
    
    vector<int> treePlace;
    
    for(int i = 0; i < size; i++){
        if(a[i] == -1){
            treePlace.push_back(i);
        }
    }
    
    for(int i = treePlace.size()-1; i > -1; i--){
            a.erase(a.begin()+treePlace[i]);
    }
    
    sort(a.begin(), a.end());
    
    
    for(int i = 0; i < treePlace.size(); i++){
        a.insert(a.begin()+treePlace[i], -1);
    }

    return a;
    
}