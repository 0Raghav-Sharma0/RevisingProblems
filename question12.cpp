class Solution {
public:
    vector<int> leftMax(vector<int>& height) {
        int ans = INT_MIN;
        vector<int> result(height.size());
        for (int i = 0; i < height.size(); i++) {
            if (height[i] > ans) {
                ans = height[i];
            }
            result[i] = ans;  // Use direct assignment instead of push_back
        }
        return result;
    }

    vector<int> rightMax(vector<int>& height) {
        int ans = INT_MIN;
        vector<int> result(height.size());
        for (int i = height.size() - 1; i >= 0; i--) {
            if (height[i] > ans) {
                ans = height[i];
            }
            result[i] = ans;  // Use direct assignment instead of push_back
        }
        return result;
    }

    int trap(vector<int>& height) {
        vector<int> LeftMax = leftMax(height);
        vector<int> RightMax = rightMax(height);
        int area = 0;
        for (int i = 0; i < height.size(); i++) {
            area += max(0, min(LeftMax[i], RightMax[i]) - height[i]);  // Ensure non-negative area
        }
        return area;
    }
};
