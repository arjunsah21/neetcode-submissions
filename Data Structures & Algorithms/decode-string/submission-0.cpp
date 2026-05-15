class Solution {
public:
    string decodeString(string s) {
        string curr = "";
        int num = 0;

        stack<string> strs;
        stack<int> nums;

        for (char ch : s) {
            if (isdigit(ch)) {
                num = num*10 + ch-'0';
            } else if (ch == '[') {
                strs.push(curr);
                nums.push(num);

                curr = "";
                num = 0;
            } else if (ch == ']') {
                string temp = curr;

                curr = strs.top();
                strs.pop();

                int repeat = nums.top();
                nums.pop();

                while (repeat--) {
                    curr+=temp;
                }
            } else {
                curr+=ch;
            }
        }
        return curr;
        
    }
};