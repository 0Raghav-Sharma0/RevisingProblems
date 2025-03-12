class Solution {
    public:
        long long countSubarrays(vector<int>& nums, int minK, int maxK) {
            long long ans = 0;
            
            int minPosition = -1;
            int maxPosition = -1;
            int culprit   = -1;
            
            for(int i = 0; i < nums.size(); i++) {
                
                if(nums[i] < minK || nums[i] > maxK)
                    culprit = i;
                
                if(nums[i] == minK)
                    minPosition = i;
                if(nums[i] == maxK)
                    maxPosition = i;
                
                int count = min(maxPosition, minPosition) - culprit;
                
                ans += (count <= 0) ? 0 : count;
                
            }
            
            return ans;
        }
    };