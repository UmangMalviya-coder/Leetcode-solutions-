class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> copy = {};
        int n = nums.size();
        for(int i = 0; i<n; i++){
            copy.push_back({nums[i], i});
        }
        sort(copy.begin(), copy.end());
        int st, end, mid;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<n; i++){
            int n1 = nums[i];
            st = i+1, end = n - 1;
            while(st<=end){
            mid = st + (end - st)/2;
            if(nums[mid] + n1 == target){
                return {copy[i].second, copy[mid].second};
            }
            else if(n1 + nums[mid] > target){
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
            }
        }
        return {};
    }
};
