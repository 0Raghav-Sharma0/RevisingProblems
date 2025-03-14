class Solution {
    public:
        bool possible(int mid , vector<int>& candies , long long sol){
            if(mid == 0){
                return false;
            }
            long long child = 0;
            for(int &t : candies){
                child = child + t/mid;
            }
            return child >= sol;
        }
        int maximumCandies(vector<int>& candies, long long k) {
            long long sum = 0;
            for(int &i : candies){
                sum = sum +i;
            }
            if(k>sum){
                return 0;
            }
            int e = sum/k;
            int s = 1;
            int ans = 0;
            int mid = s+ (e-s)/2;
            while(s<=e){
                if(possible(mid , candies , k)){
                    ans = mid;
                    s = mid + 1;
                }
                else{
                    e = mid-1;
                }
                mid = s + (e-s)/2;
            }
    
           return ans;
            
        }
    };