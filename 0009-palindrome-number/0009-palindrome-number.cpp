class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }

        long long int palindrome = 0;
        int xCopy = x;

        while(xCopy != 0) {
            long long int remainder = xCopy % 10;
            palindrome = palindrome * 10 + remainder;
            xCopy /= 10;
        }

        if(x != palindrome) {
            return false;
        }

        return true;
    }
};