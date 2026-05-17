class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int r = matrix.size()-1;
        int row = 0;

        while (l <= r) {
            int mid1 = l + (r-l)/2;
            if (matrix[mid1][0] == target) {
                return 1;
            } else if (matrix[mid1][0] < target) {
                row = mid1;
                l = mid1 + 1;
            } else {
                r = mid1 - 1;
            }
        }

        int left = 0;
        int right = matrix[row].size() - 1;
        while (left <= right) {
            int mid2 = left + (right - left)/2;
            if (matrix[row][mid2] == target) {
                return 1;
            } else if (matrix[row][mid2] < target) {
                left = mid2 + 1;
            } else {
                right = mid2 - 1;
            }
        }
        return 0;
    }
};
