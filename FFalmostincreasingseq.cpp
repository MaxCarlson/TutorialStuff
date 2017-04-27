bool almostIncreasingSequence(std::vector<int> sequence) {

        int high = 0;
            //cout << sequence[4];

        //sort(sequence.begin(), sequence.end());
        
        for(int i = 0; i < sequence.size()-1; i++){
                if(sequence[i]>=sequence[i+1]) {
                        if(sequence[i+1]<=sequence[i-1]){
                                sequence.erase(sequence.begin()+(i+1));
                                i = sequence.size();        
                        } else {
                                sequence.erase(sequence.begin()+i);
                                i = sequence.size();        
                        }
                        
                        
                }
        }
        
        cout << sequence[0] << sequence[1] << sequence[2] << sequence[3];
        
        for(int i = 0; i < sequence.size()-1; i++){
                if(sequence[i]>=sequence[i+1]){
                        return false;
                } 
        }
        return true;
      
        
   
    
}