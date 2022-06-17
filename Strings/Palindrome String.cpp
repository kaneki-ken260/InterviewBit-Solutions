bool isNoCap(char a)
{
    if(a>=97 && a<=122) return true;
    return false;
}
bool isCap(char a)
{
    if(a>=65 && a<=90) return true;

    return false;
}

bool isNumber(char a)
{
   if(a>=48 && a<=57) return true;
   return false;
}


int Solution::isPalindrome(string A) {
    
    string b="";
    for(int i=0;i<A.length();i++)
    {
        if(isCap(A[i]))
        {
            b.push_back(A[i]+32);
        }
        else if(isNoCap(A[i]))
        b.push_back(A[i]);
        else if(isNumber(A[i]))
        b.push_back(A[i]);
    }
  int i=0,j=b.length()-1;
    while(i<=j)
    {
        if(b[i]==b[j])
        {
                i++;j--;   
        }
      else return 0;
    }
    return 1;
}