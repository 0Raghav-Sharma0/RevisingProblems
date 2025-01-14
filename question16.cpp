
class Solution {
public:
    int hammingWeight(int n) {
        return popcount(static_cast<unsigned int>(n));
    }
};

//This is the standard uses of the popcount function

class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n != 0) {
            if (n & 1) {
                count++;
            }
            n = n >> 1; // Shift n right by 1 bit
        }
        return count;
    }
};
