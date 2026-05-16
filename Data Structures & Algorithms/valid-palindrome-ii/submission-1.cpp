class Solution {
private:
    bool isPalindrome(string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int l=0, r=s.size()-1;
        if (isPalindrome(s, l, r)) return true;

        while (l < r) {
            if (s[l] != s[r]) {
                return isPalindrome(s, l, r-1) || isPalindrome(s, l+1, r);
            }
            l++;
            r--;
        }

        return false;
    }
};