class Solution {
public:
    void sortColors(vector<int>& nums) {
    int n = nums.size();
    int mid = 0, high = nums.size()-1, low = 0;
    int i = 0;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid], nums[low]);
            low++;
            mid++;
            i++;
        }
        else if(nums[mid]==1){
            mid++;
            i++;
        }
        else if(nums[mid]==2){
            swap(nums[mid], nums[high]);
            high--;
    }
    }
    }
};
