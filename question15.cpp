class Solution {
public:
    void multiply(vector<int>& arr, int& size, int multiplier) {
        int carry = 0;
        for (int i = 0; i < size; i++) {
            int res = multiplier * arr[i];
            res = res + carry;
            arr[i] = res % 10;
            carry = res / 10;
        }
        while (carry > 0) {
            arr[size] = carry % 10;
            size++;
            carry = carry / 10;
        }
    }

    vector<int> factorial(int n) {
        vector<int> arr(10000, 0); // A large vector to store digits
        arr[0] = 1;               // Initialize the first digit as 1
        int size = 1;             // Current size of the number

        for (int multiplier = 2; multiplier <= n; multiplier++) {
            multiply(arr, size, multiplier);
        }

        vector<int> result;
        for (int i = size - 1; i >= 0; i--) {
            result.push_back(arr[i]); // Push digits in reverse order
        }

        return result;
    }
};
