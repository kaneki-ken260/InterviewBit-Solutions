int Solution::coverPoints(vector<int> &A, vector<int> &B) {

    int ans=0;
    int x = abs(A[0]);
    int y = abs(B[0]);
    for(int i=1;i<A.size();i++)
    {
       x = abs(A[i] - A[i-1]);
       y = abs(B[i] - B[i-1]);
       ans+=max(x,y);
    }
    return ans;
}
