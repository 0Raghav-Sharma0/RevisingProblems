class Solution {
public:

    vector<vector<int>>result;
    void twoSum(int target , vector<int>& nums, int i, int j){
        while(i<j){
            if(nums[i]+nums[j]>target){
                j--;
            }
            else if((nums[i]+nums[j]<target)){
                i++;
            }
            else{
                result.push_back({-target , nums[i], nums[j]});
                while ((i<j) && (nums[i]==nums[i+1])){
                    i++;
                }
                 while( (i<j) && (nums[j]==nums[j-1])){
                    j--;
                }
                i++;
                j--;
            }
        }

    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n;i++){
            if (i>0 && (nums[i]==nums[i-1])){
                continue;
            }
            int target = (-1)*nums[i];

        twoSum(target,nums,i+1,n-1);


        }
        return result;
    }
};