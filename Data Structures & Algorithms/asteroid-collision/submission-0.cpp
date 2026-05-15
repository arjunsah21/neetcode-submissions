class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int ast : asteroids) {
            bool destroyed = false;
            while (!st.empty() && ast < 0 && st.top() > 0) {
                if (st.top() < -ast) {
                    st.pop(); // stack asteroid destroyed
                } else if (st.top() == -ast) {
                    st.pop(); // both destroyed
                    destroyed = true;
                    break;
                } else {
                    // current asteriod destroyed
                    destroyed = true;
                    break;
                }
            }
            if (!destroyed) {
                st.push(ast);
            }
        }

        vector<int> res;

        while (!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};