class SmallestInfiniteSet {
    public:
        vector<bool>v;
        int i;
        SmallestInfiniteSet() {
            v= vector<bool>(1001,true);
            i=1;
        }
        
        int popSmallest() {
            int result = i;
            v[result] = false;
            for(int j=i+1; j<1001; j++){
                if(v[j] == true){
                    i = j;
                    break;
                }
            }
            return result;
            
        }
        
        void addBack(int num) {
            if(v[num] == false){
            v[num] = true;
            if(num<i){
                i=num;
                 }
            }
        }
    };
    
    /**
     * Your SmallestInfiniteSet object will be instantiated and called as such:
     * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
     * int param_1 = obj->popSmallest();
     * obj->addBack(num);
     */