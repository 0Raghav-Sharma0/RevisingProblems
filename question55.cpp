class Solution {
    public:
        int pivot(vector<int>& nums){
        int s = 0;
        int e = nums.size()-1;
        int mid;
        while(s < e){
             mid = s + (e-s)/2;
            if(nums[mid] >= nums[0]){
                s= mid +1;
            }
            else{
               e = mid;
            }
        }
        return s;
    }
        int binarySearch(vector<int>& nums , int target ,int s, int e){
                int mid = s + (e-s)/2;
            while(s<=e){
                if(nums[mid]==target){
                    return mid;
                }
                else if(nums[mid]<target){
                    s = mid + 1;
                }
                else{
                    e = mid -1;
                }
                mid = s + (e-s)/2;
            }
             return -1;
        }
        int search(vector<int>& nums, int target) {
            int p = pivot(nums);
            int n = nums.size();
            int k = target;
            if((k>=nums[p]) && (k<=nums[nums.size()-1])){
                return binarySearch(nums,k,p,n-1);
            }
            else{
                return binarySearch(nums,k,0,p-1);
            }
    
            return -1;
        }
    };