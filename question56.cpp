class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int target) {
            int s = 0;
            int e = nums.size()-1;
            int mid = s + (e-s)/2;
            int ans1 = -1;
            // first occurence
            while(s<=e){
                if(nums[mid] == target){
                    ans1 = mid;
                    e = mid - 1;
                }
                else if(nums[mid] > target){
                    e = mid-1;
                }
                else{
                    s = mid + 1;
                }
                mid = s + (e-s)/2;
            }
            s = 0;
            e = nums.size()-1;
             mid = s + (e-s)/2;
            int ans2 = -1;
            while(s<=e){
                if(nums[mid] == target){
                    ans2 = mid;
                    s = mid +1;
                }
                else if(nums[mid] > target){
                    e = mid-1;
                }
                else{
                    s = mid + 1;
                }
                mid = s + (e-s)/2;
            }
        vector<int>sol = {ans1 , ans2};
        return sol;
        }
    };