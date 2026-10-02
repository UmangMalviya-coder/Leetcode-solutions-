class Solution {
public:

    bool isValid(vector<int>& A, int n, int m, int minallowed)
    {
      int ball = 1;
      int lastposition = A[0];
      for(int i = 0; i<n; i++){
        if(A[i]-lastposition>=minallowed){
            lastposition = A[i];
            ball++;
        }
        if(ball == m){ return true;}
      }
      return false;
      
    }
    
    int Givegap( vector<int>& A, int n, int m){
    if(m>n) return -1;
    int p, st, end, sum, mid;
   
    p = 0;
    st = 1;
    end = A[n-1]-A[0];
    while(st<=end){
    mid = st + (end - st)/2;
    if(isValid( A, n, m, mid)){
        st = mid + 1;
        p = mid;
    }
    else end = mid - 1;
}
    return p;
}
    int maxDistance(vector<int>& position, int m) 
       {
        sort(position.begin(),position.end());
        int n = position.size();
        return Givegap(position, n, m);
    }
};
