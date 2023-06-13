bool searchMatrix(vector<vector<int>>& mat, int target) {
        int i=0,j=mat.size()-1;
        int r=mat[0].size()-1;
        int rmid=(i+j)/2;
        while(i<=j)
        {
            rmid=(i+j)/2;   
            if(mat[rmid][0]<=target&&mat[rmid][r]>=target)
            {
                int l=0,e=r;
                int mid=(l+e)/2;
                while(l<=e)
                {
                    mid=(l+e)/2;
                    if(mat[rmid][mid]==target)
                    return true;
                    else
                    if(mat[rmid][mid]>target)
                    e=mid-1;
                    else
                    l=mid+1;
                }
                return false;
            }
            else
            if(mat[rmid][0]>target)
            j=rmid-1;
            else
            i=rmid+1;
        }
        return false;
}