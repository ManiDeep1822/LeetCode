class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        int copy = x;
        long int reverse = 0;

        while (x != 0) {
            reverse = reverse * 10 + (x % 10);

            if (reverse < INT_MIN || reverse > INT_MAX) {
                return false;
            }

            x /= 10;
        }

        if (reverse != copy) {
            return false;
        }

        return true;
    }
};