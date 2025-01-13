class Solution {
public:
    int reverse(int x) {
        int temp = x;
        int ans = 0;
        while(temp!=0){
            if((ans > INT_MAX/10) || (ans < INT_MIN/10)){
                return 0;
            }
            ans=ans*10;
            ans=ans+(temp % 10);
            temp = temp/10;

        }
        return ans;
    }
};