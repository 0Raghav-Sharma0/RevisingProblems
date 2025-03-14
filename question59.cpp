class Solution {
    public:
        int singleNonDuplicate(vector<int>& nums) {
           int n = nums.size();
           int s = 0;
           int e = n-1;
           int mid = s + (e-s)/2;
           while(s<e){
            bool even;
            if((e-mid)%2 == 0){
                even = true;
            }
            else{
                even = false;
            }
            if(nums[mid] == nums[mid+1]){
                if(even){
                    s = mid+2;
                }
                else{
                    e = mid - 1;
                }
            }
            else{
                if(even){
                    e = mid;
                }
                else{
                    s = mid + 1;
                }
            }
            mid = s + (e-s)/2;
           }
        return nums[s];
        }
    };
    