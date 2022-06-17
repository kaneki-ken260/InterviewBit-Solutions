int binaryDecr(vector<int> &A, int start,int end,int B)
{
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(A[mid]==B)
        return mid;

        else if(A[mid]>B)
        start = mid+1;

        else
        end = mid-1;
    }
    return -1;
}

int binaryIncr(vector<int> &A, int start,int end,int B)
{
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(A[mid]==B)
        return mid;

        else if(A[mid]>B)
        end = mid-1;

        else
        start = mid+1;
    }
    return -1;
}

int Solution::solve(vector<int> &A, int B) {

    int n = A.size();
    int start=0,end=n-1,mid,res=-1;

    while(start<=end)
    {
        mid = start + (end-start)/2;

        if(mid>0 && mid<n-1)
        {
            if(A[mid]>A[mid+1] && A[mid]>A[mid-1])
            {
                res = mid;
                break;
            }

            else if(A[mid-1]>A[mid])
            end = mid-1;

            else
            start = mid+1;
        }

        

        else if(mid==0)
        {
            if(A[mid]>A[mid+1])
            res = mid;
            else
            res = mid+1;
        }

        else if(mid==n-1)
        {
            if(A[mid-1]>A[mid])
            res = mid-1;
            else
            res = mid;
        }
    }

    return max(binaryIncr(A,0,res-1,B),binaryDecr(A,res,n-1,B)); 
}
