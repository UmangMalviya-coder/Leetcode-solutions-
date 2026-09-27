//single element in a sorted array 
// nice problem it was really confusing to decided the cases for even and odd number of terms as the indexes begins with 0
#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int> nums = {3, 3, 4, 4, 5, 5, 6, 7, 7, 9, 9};
int n = nums.size();
      int st = 0, end = n-1;
      int mid;
      //endge cases 
      if(n == 1){return nums[0];}
      else if(nums[0] != nums[1]){return nums[0];}
      else if(nums[n-1] != nums[n-2]){return nums[n-1];}
      while(st<=end){
        mid = st + (end - st)/2;
         if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]){
            //for VS code
            cout<<nums[mid];
            return nums[mid];
         }
         else if(mid % 2 != 0){
            if(nums[mid-1] == nums[mid]){ st = mid + 1;}
            else{end = mid - 1;}
         } 
         else {
             if(nums[mid-1] == nums[mid]){ end = mid - 1;}
             else{st = mid + 1;}
         }
      }
      return -1;
    }
