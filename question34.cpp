class Solution {
    public:
        string minWindow(string s, string t) {
            if (s.empty() || t.empty()) return "";
    
            vector<int> counter(128, 0); 
            for (char c : t) counter[c]++;
    
            int left = 0, right = 0, minLen = INT_MAX, start = 0;
            int required = t.size(), formed = 0;
    
            while (right < s.size()) {
                      if (--counter[s[right]] >= 0) {
                    formed++;
                }
    
                while (formed == required) {
                    if (right - left + 1 < minLen) {
                        minLen = right - left + 1;
                        start = left;
                    }
    
                    if (++counter[s[left]] > 0) {
                        formed--;
                    }
                    left++;
                }
                right++;
            }
    
            return minLen == INT_MAX ? "" : s.substr(start, minLen);
        }
    };
    