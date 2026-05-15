class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> scores;

        for (string s : operations) {
            if (s == "+") {
                int temp = scores.top();
                int new_score = temp;
                scores.pop();
                new_score += scores.top();
                scores.push(temp);
                scores.push(new_score);
            } else if (s == "C") {
                scores.pop();
            } else if ( s == "D" ) {
                scores.push(scores.top() * 2);
            } else {
                scores.push(stoi(s));
            }
        }

        int score_sum = 0;
        while (!scores.empty()) {
            score_sum += scores.top();
            scores.pop();
        }
        return score_sum;
    }
};