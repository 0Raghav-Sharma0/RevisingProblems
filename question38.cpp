class Solution {
    public:
        int numberOfSubstrings(string s) {
            int countA = 0;
            int countB = 0;
            int countC = 0;
            int i=0;
            int j=0;
            int n = s.size();
            int result = 0;
            while(j<n){
                if(s[j]=='a'){
                    countA++;
                }
                 if(s[j]=='b'){
                    countB++;
                }
                 if(s[j]=='c'){
                    countC++;
                }
                while((countA >= 1) && (countB >= 1) && (countC >= 1)){
                    result = result + (n-j);
                    if(s[i]=='a'){
                        countA--;
                    }
                    if(s[i]=='b'){
                        countB--;
                    }
                    if(s[i]=='c'){
                        countC--;
                    }
                    i++;
                }
                j++;
            }
            return result;
        }
    };