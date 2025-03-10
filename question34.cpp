class Solution {
    public:
        bool allZero(vector<int>& counter){
            for(int i : counter){
                if(i!=0){
                    return false;
                }
            }
            return true;
        }
        vector<int> findAnagrams(string s, string p) {
            vector<int>result;
            int i=0;
            int j=0;
            int k = p.length();
            vector<int>counter(26,0);
            for(char c : p){
                counter[c-'a']++;
            }
            while(j<s.length()){
                counter[s[j]-'a']--;
                if(j-i+1 == p.length()){
                    if(allZero(counter)){
                        result.push_back(i);
                    }
                    counter[s[i]-'a']++;
                    i++;
                }
                j++;
            }
            return result;
        }
    };