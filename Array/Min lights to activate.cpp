int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    

    int j=0;
    int ans=0;

    while(j<n)
    {
       int right = min(j + B -1,n-1);
       int left = max(j - B +1,0);

       bool isBulbPresent = false;
       while(right>=left)
       {
          if(A[right]==1)
          {
              isBulbPresent = true;
              break;
          }
          right--;
       }
       if(!isBulbPresent) return -1;
       ans++;

       j = right + B;
    }
    return ans;
}
