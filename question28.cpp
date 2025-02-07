class Solution {
    public:
          string removeDuplicates(string s) {
            stack<char> st;
            string result = "";
            string ret = "";
            for (char c : s) {
                if (!st.empty() && st.top() == c) {
                    st.pop();
                } else {
                    st.push(c);
                }
            }
            while(!st.empty()){
                result.push_back(st.top());
                st.pop();
            }
            reverse(result.begin(),result.end());
            return result;
        }
    };