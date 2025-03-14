class Solution {
    public:
        bool possible(vector<int>& piles, int mid , int h){
            long long p = 0;
            for(int& i : piles){
                p += ceil((double)i/mid);
            }
            return p<=h;
        }
        int minEatingSpeed(vector<int>& piles, int h) {
            int s = 1;
            int maxi = INT_MIN;
            for(int i=0;i<piles.size();i++){
                maxi = max(maxi,piles[i]);
            }
            int e = maxi;
            int mid = s + (e-s)/2;
            int ans = 0;
            while(s<=e){
                if(possible(piles,mid,h)){
                    ans = mid;
                    e = mid - 1;
                }
                else{
                    s = mid+1;
                }
                mid = s + (e-s)/2;
            }
            return ans;
        }
    };