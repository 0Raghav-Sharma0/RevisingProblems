class Solution {
    public:
        long long coloredCells(int n) {
            long long count = 0;
            int x = n-1;
            for(int i=1;i<=(2*x-1);i=i+2){
                count = count + i;
            }
            count = count*2;
            count = count+(2*n-1);
            return count;
    
        }
    };