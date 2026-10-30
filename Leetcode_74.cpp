class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int st = 0, end = m - 1;
        int row = -1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if(target >= matrix[mid][0] && target <= matrix[mid][n-1])
            {
                row = mid;
                break;
            }
            else if (target >= matrix[mid][n-1])
            {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        if(row == -1) return false;
        
        // ---- second binary search: find the column inside that row ----
        // handle the "no row found" case before this
        st = 0;
        end = n - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            // your normal binary search goes here
             if(target == matrix[row][mid])
            {
                return true;
            }
            else if (target > matrix[row][mid])
            {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return false;
    }
};
