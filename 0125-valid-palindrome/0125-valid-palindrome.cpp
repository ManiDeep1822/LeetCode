class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned_str = "";

        // clean the string: remove special characters, convert to lowercase
        // manually
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            // check if alphabet
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                if (ch >= 'A' && ch <= 'Z')
                    ch = ch + 32; // convert uppercase to lowercase manually
                cleaned_str += ch;
            }
            // check if digit
            else if (ch >= '0' && ch <= '9') {
                cleaned_str += ch;
            }
        }

        int i = 0;
        int j = cleaned_str.length() - 1;

        // two-pointer palindrome check
        while (i < j) {
            if (cleaned_str[i] != cleaned_str[j])
                return false;
            i++;
            j--;
        }

        return true;
    }
};