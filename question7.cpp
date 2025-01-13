class Solution {
public:
    bool isPalindrome(string s) {
        string result= "";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                result.push_back(tolower(s[i]));
            }
        }
        string rev = result;
        reverse(rev.begin(),rev.end());
        if(result==rev){
            return true;
        }
        else{
            return false;
        }
    }
};