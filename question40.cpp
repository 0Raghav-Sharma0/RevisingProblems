class Solution {
    public:
      vector<vector<int>> findWinners(vector<vector<int>>& matches) {
            map<int, int> mp;
    
            for (int i = 0; i < matches.size(); i++) {
                int winner = matches[i][0];
                int loser = matches[i][1];
    
                mp[loser]++; 
                if (mp.find(winner) == mp.end()) {
                    mp[winner] = 0; 
                }
            }
            vector<int> winners, losers;
            for(auto it : mp){
                if(it.second == 1){
                losers.push_back(it.first);
                }
            }
            for(auto it : mp){
                if(it.second == 0){
                winners.push_back(it.first);
                }
            }
    
            vector<vector<int>>ans = {winners , losers};
    
    
            return ans;
        }
    };