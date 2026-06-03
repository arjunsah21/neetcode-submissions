class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";

        int l1 = word1.size();
        int l2 = word2.size();

        int i=0, j=0;

        while (i<l1 && j<l2) {
            res += word1[i++];
            res += word2[j++];
        }

        res += word1.substr(i);
        res += word2.substr(j);

        return res;
    }
};