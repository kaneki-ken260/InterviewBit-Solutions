vector<int> reverse(vector<int> &A)
{
    int i=0,j=A.size()-1;
    while(i<j)
    {
       swap(A[i],A[j]);
       i++;
       j--;
    }
    return A;
}

vector<int> Solution::plusOne(vector<int> &A) {
 int n = A.size();
 A = reverse(A);
 vector<int> ans;
 int carry=0;
 A[0]++;
 int i=0;
 while(i<n)
 {
     int sum=A[i] + carry;
     carry = sum/10;
     ans.push_back(sum%10);
     i++;
 }
 ans.push_back(carry);
 i = ans.size()-1;
 while(ans[i]==0 && i>=0)
 {ans.pop_back();
 i--;}
 return reverse(ans);
}
