class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";
        for(char c : s) {
            if(isalnum(c)) {
                cleaned += tolower(c);
            }
        }

        return cleaned == string(cleaned.rbegin(), cleaned.rend());
    }
};
