class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        int visited = -1;
        vector<int>freq(n,0);
        for(int i=0;i<n;i++){
            if(freq[i] == visited) continue;
            int count = 1;
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                    freq[j]=visited;
                }
            }
            freq[i]=count;
        }
        
        for(int i=0;i<n;i++){
            if (freq[i] == visited) continue;
            for(int j= i+1; j<n;j++){
                 if (freq[j] == visited) continue;
                if(freq[i]==freq[j]){
                    return false;
                }
            }
        }
        return true;
    }
};