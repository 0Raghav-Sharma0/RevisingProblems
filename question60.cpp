class Solution {
    public:
        bool possible(long long mid, vector<int>& nums, int totalTrips) {
            long long actualTrips = 0;
            for (int &i : nums) {
                actualTrips += mid/i;
            }
            return actualTrips >= totalTrips;
        }
    
        long long minimumTime(vector<int>& time, int totalTrips) {
            long long s = 1;
            long long ans = 0;
            int mini = INT_MAX;
            
            for (int i : time) {
                mini = min(mini, i);
            }
    
            long long e = (long long)totalTrips * (long long)mini;
            
            while (s <= e) {  
                long long mid = s + (e - s) / 2;  
                
                if (possible(mid, time, totalTrips)) {
                    ans = mid;
                    e = mid - 1;
                } else {
                    s = mid + 1;
                }
            }
    
            return ans;
        }
    };
    