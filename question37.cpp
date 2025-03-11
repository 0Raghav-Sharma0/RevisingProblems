class Solution {
    public:
        int maxConsecutiveAnswers(string answerKey, int k) {
            //case 1; t-->f
            int i=0,j=0;
            int countT = 0;
            int result = 0;
            int countF=0;
            int n = answerKey.length();
            while(j<n){
                if(answerKey[j]=='T'){
                    countT++;
                }
                if(countT > k){
                    while (countT>k){
                        if(answerKey[i]=='T'){
                            countT--;
                        }
                        i++;
                    }
                }
                result = max(result,j-i+1);
                j++;
            }
            i=0,j=0;
              while(j<n){
                if(answerKey[j]=='F'){
                    countF++;
                }
                if(countF > k){
                    while (countF>k){
                        if(answerKey[i]=='F'){
                            countF--;
                        }
                        i++;
                    }
                }
                result = max(result,j-i+1);
                j++;
            }
            return result;
            
        }
    };