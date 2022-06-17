int Solution::colorful(int A) {
    unordered_map<long long, long long> mp;
    
    
    string s="";
    while(A>0)
    {
        int m = A%10;
        A = A/10;
        s.push_back((char)m+48);
    }
    reverse(s.begin(),s.end());
    for(int i=0;i<s.length();i++)
    {
        long long prod=1;
        for(int j=i;j<s.length();j++)
        {
           long long k = (long long)(s[j]-'0');
           prod = prod*k;
           if(mp.find(prod)!=mp.end())
           return 0;
           
           mp[prod]++; 
        }
    }
    return 1;
}
