class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};

//---------------------------------------------------------------------->This the comment line
class Solution {
public:
    bool isPowerOfTwo(int n) {
        while(n!=1){
            if(n==0){
                return false;
            }
            if(n%2!=0){
                return false;
            }
            else{
                n=n/2;
            }
        }
        return true;
    }
};