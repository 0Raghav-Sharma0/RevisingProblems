class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> umap;
        vector<vector<string>>result;
        for(int i=0;i<strs.size();i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            umap[temp].push_back(strs[i]);
        }
        for(auto it :umap){
            result.push_back(it.second);
        }
        return result;
    }
};