class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();                
        int sum = 0;
        unordered_set<int> seen;           
        int repeated = -1;
        int missing = -1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if(seen.find(grid[i][j]) != seen.end()){
                    repeated = grid[i][j];
                }
                seen.insert(grid[i][j]);
                sum+= grid[i][j];
            }
        }
        int expsum = ((n*n)*(n*n+1))/2;
        missing = expsum + repeated - sum;

        return {repeated, missing};
    }
};
