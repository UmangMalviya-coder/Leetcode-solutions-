class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left = 0, right = n - 1, down = n - 1, up = 0;
        int idx = 1;
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        while(left<=right && up<=down){
            for(int i = left; i <= right; i++){
                matrix[up][i] = idx++;
            }
            up++;
            for(int i = up; i<= down; i++){
                matrix[i][right] = idx++;
            }
            right--;
            if(up<=down){
            for(int i = right; i>= left; i--){
                matrix[down][i] = idx++;
            }
            down--;}
            if(left<=right){
            for(int i = down; i>= up; i--){
                matrix[i][left] = idx++;
            }
            left++;}
        }
        return matrix;
    }
};
