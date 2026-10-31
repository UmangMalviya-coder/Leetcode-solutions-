class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left = 0, right = n - 1, down = n - 1, up = 0;
        int idx = 0;
        vector<int> val = {};
        for(int i = 1; i<=n*n; i++){
            val.push_back(i);
        }
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        while(left<=right && up<=down){
            for(int i = left; i <= right; i++){
                matrix[up][i] = val[idx++];
            }
            up++;
            for(int i = up; i<= down; i++){
                matrix[i][right] = val[idx++];
            }
            right--;
            if(up<=down){
            for(int i = right; i>= left; i--){
                matrix[down][i] = val[idx++];
            }
            down--;}
            if(left<=right){
            for(int i = down; i>= up; i--){
                matrix[i][left] = val[idx++];
            }
            left++;}
        }
        return matrix;
    }
};
