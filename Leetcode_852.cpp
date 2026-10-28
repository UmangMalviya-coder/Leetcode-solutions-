class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        /*int i = 0, ans = INT_MIN;
        while(ans<arr[i]){
            ans = max(ans, arr[i]);
            i++;
        }
        if(ans>=arr[i]) {
            return i-1;
        }
        return -1;*/
        int st = 1, end = arr.size()-2;
        while(st<=end){
           int mid = st + (end-st)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid-1]<arr[mid] && arr[mid]<arr[mid+1]){
                st = mid + 1;
            }
             else if(arr[mid-1]>arr[mid] && arr[mid]>arr[mid+1]){
                end = mid - 1;
             }
        }
        return -1;
    }
};
