class Solution {
    public:
        int maxVowels(string s, int k) {
            int count = 0, maxi = 0, i = 0, j = 0;
    
            while (j < s.length()) {
                if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
                    count++;
    
                if (j - i + 1 == k) {
                    maxi = max(maxi, count);
                    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                        count--;
                    i++;
                }
                j++;
            }
            return maxi;
        }
    };
    