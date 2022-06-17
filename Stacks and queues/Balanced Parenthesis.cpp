int Solution::solve(string A) {
    stack<char> st;
    int ans = 1;

    int len = A.length();
    for(int i=0;i<len;i++)
    {
        if(A[i]=='(')
        st.push(A[i]);

        else
        {
            if(!st.empty() && st.top()=='(')
            st.pop();
            else
            {
                ans=0;
                break;
            }
        }
    }
    if(!st.empty())
    return 0;
    
    return ans;
}
