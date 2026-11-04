class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2)
            return 0;

        vector<bool> nums(n, true);

        nums[0] = nums[1] = false;

        for (int i = 4; i < n; i += 2) {
            nums[i] = false;
        }

        for (int i = 3; i * i < n; i += 2) {
            if (nums[i]) {
                for (int j = i * i; j < n; j += 2 * i) {
                    nums[j] = false;
                }
            }
        }

        int count = 1;

        for (int i = 3; i < n; i += 2) {
            if (nums[i]) {
                count++;
            }
        }

        return count;
    }
};