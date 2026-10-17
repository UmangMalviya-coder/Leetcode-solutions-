class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int high = nums.size()-1, i = 0, low = 0;
        while(i<=high){

            if(nums[i]!=0){
                swap(nums[low], nums[i]);
                low++;
                i++;
            }
            else i++;
        }
    }
};
