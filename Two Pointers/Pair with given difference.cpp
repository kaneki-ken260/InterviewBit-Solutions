int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    
    unordered_map<int,int> mp;

    for(int i=0;i<n;i++)
    {
        mp[A[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        int m = B+A[i];

        if(m==A[i])
        {
            if(mp[m]>1)
            return 1;
        }
        else
        {
            if(mp[m]>0)
            return 1;
            }
    }

    return 0;
}
