class Solution {
    public:
        vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
            sort(potions.begin(),potions.end());
            int m = potions.size();
            int n = spells.size();
            vector<int>ans;
            int maxPotion = potions[m-1];
            for(int i=0;i<n;i++){
                int spell = spells[i];
                long long minPotion = ceil((double)success/spell);
                if(minPotion > maxPotion){
                    ans.push_back(0);
                    continue;
                }
                int index = lower_bound(begin(potions), end(potions), minPotion) -           begin(potions);
                int count = m - index;
                ans.push_back(count);
            }
            return ans;
        }
    };