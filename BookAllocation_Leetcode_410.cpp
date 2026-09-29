//very hard problem // invested 3 days . I was building code but got confuse too much times about how to decide the max allowed pages then understood and built a separate function
// to decide the max allowed pages and move it in left or right to according to possibilities
#include <iostream>
#include <vector>
using namespace std;

bool isvalid(vector<int> &A, int n, int m, int maxAllowedPages) {
    int students = 1, pages = 0;

    for(int i = 0; i < n; i++) {

        if(A[i] > maxAllowedPages) {
            return false;
        }

        if(pages + A[i] <= maxAllowedPages) {
            pages += A[i];
        } 
        else {
            students++;
            pages = A[i];
        }
    }

    return students <= m ? true : false;
}

int allocateBooks(vector<int> &A, int n, int m) {

    if(m > n) {
        return -1;
    }

    int sum = 0;
    int maxBook = 0;

    for(int i = 0; i < n; i++) {
        sum += A[i];
        maxBook = max(maxBook, A[i]);
    }

    int ans = -1;

    int st = maxBook;
    int end = sum;

    while(st <= end) {

        int mid = st + (end - st) / 2;

        if(isvalid(A, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } 
        else {
            st = mid + 1;
        }
    }

    return ans;
}

int main() {

    vector<int> A = {2, 1, 3, 4};
    int n = 4, m = 2;

    cout << allocateBooks(A, n, m) << endl;
    
    return 0;
}
