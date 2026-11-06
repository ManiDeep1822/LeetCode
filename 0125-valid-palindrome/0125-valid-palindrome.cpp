class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;

        string copy = "";

        while (i < s.size()) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                int ch = s[i] + 32;
                copy += ch;
            } else if (s[i] >= 'a' && s[i] <= 'z') {
                copy += s[i];
            } else if (s[i] >= '0' && s[i] <= '9') {
                copy += s[i];
            }
            i++;
        }

        i = 0;
        int j = copy.size() - 1;

        int n = copy.size() / 2;

        int flag = true;

        while (i <= n && j >= n) {
            if (copy[i] != copy[j]) {
                flag = false;
                break;
            }
            i++;
            j--;
        }

        return flag;
    }
};