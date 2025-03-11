class Solution {
    public:
        int longestSubarray(vector<int>& nums) {
            int zeroCount = 0;
            int i=0,j=0;
            int n =nums.size();
            int result = 0;
            while(j<n){
                if(nums[j]==0){
                    zeroCount++;
                }
                    while(zeroCount>1){
                        if(nums[i]==0){
                            zeroCount--;
                        }
                           i++;
                    }
                    if((j-i)>result){
                    result = j-i;
                }
                j++;
                }
                
            return result;
        }
    };