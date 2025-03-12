class Solution {
    public:
        int rev(int x){
            int temp = x;
            int ans = 0;
            while(temp!=0){
                ans = ans*10;
                ans = (ans + temp%10);
                temp = temp/10;
            }
            return ans;
        }
        int countNicePairs(vector<int>& nums) {
            int count =0;
            unordered_map<int,int>mp;
            vector<int>sol;
            for(int i=0;i<nums.size();i++){
                sol.push_back(nums[i]-rev(nums[i]));
            }
            for(int i=0;i<nums.size();i++){
                count = (count + mp[sol[i]])%1000000007;
                mp[sol[i]]++;
            }
            return count;
        }
    };