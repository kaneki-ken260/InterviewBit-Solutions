int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int sum = 0;
    for(int i=0;i<B;i++)
    {
      sum += A[i];
    }
    int mx = sum;
    int p=n;
    while(B>0)
    {
        sum = sum - A[B-1];
        sum = sum + A[p-1];
        p--;
        B--;
        mx = max(sum,mx);
    }
    return mx;
}
