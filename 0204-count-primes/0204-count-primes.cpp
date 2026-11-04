class Solution {
public:
    int countPrimes(int n) {

        if (n <= 2)
            return 0;

        vector<bool> nums(n, true);

        nums[0] = false;
        nums[1] = false;

        for (int i = 2; i * i < n; i++) {
            int j = i * i;

            while (j < n) {
                if (nums[j] == true) {
                    nums[j] = false;
                }

                j += i;
            }
        }

        int count = 0;

        for (int i : nums) {
            if (i == true)
                count++;
        }

        return count;
    }
};