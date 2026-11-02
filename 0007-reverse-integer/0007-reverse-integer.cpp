class Solution {
public:
    int reverse(int x) {
        long long int reverse = 0;

        while (x != 0) {
            int remainder = x % 10;
            reverse = remainder + reverse * 10;

            if (reverse < INT_MIN || reverse > INT_MAX) {
                reverse = 0;
                break;
            }

            x /= 10;
        }

        return reverse;
    }
};