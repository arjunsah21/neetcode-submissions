class Solution {
private:
    bool isPalindrome(string& s) {
        int l=0, r=s.size()-1;
        while (l < r) {
            if (s[l] != s[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        if (isPalindrome(s)) return true;

        for (int i=0; i<s.size(); i++) {
            string newS = s.substr(0, i) + s.substr(i+1);
            if (isPalindrome(newS)) {
                return true;
            }
        }

        return false;
    }
};