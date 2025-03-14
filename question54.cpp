class Solution {
    public:
        int pivotIndex(vector<int>& nums) {
            vector<int>arr1(nums.size(),0);
            vector<int>arr2(nums.size(),0);
            int sum1=0;
            for(int i=1;i<nums.size();i++){
                sum1 = sum1 + nums[i-1];
                arr1[i]=sum1;
            }
            int sum2=0;
            for(int i=nums.size()-2;i>=0;i--){
                sum2 = sum2 + nums[i+1];
                arr2[i]=sum2;
            }
            int pivot = -1;
                for(int i=0;i<nums.size();i++){
                    if(arr1[i] == arr2[i]){
                        pivot = i;
                        break;
                    }
                }
            return pivot;
        }
    };