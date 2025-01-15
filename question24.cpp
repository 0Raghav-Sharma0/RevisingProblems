class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j=height.size()-1;
        int maxWater =0;
        while(i<j){
            maxWater = max(maxWater,((j-i)*min(height[i],height[j])));
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
        }
            return maxWater;
    }
};