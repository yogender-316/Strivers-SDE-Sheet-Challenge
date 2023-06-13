#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int rstart=0,cstart=0;
    int rend=mat.size()-1,cend=mat[0].size()-1;
    int temp=-1;
    int tot=n*m,count=0;
    if(rend==0||cend==0)
    return;
    while(rstart<rend&&cstart<cend)
    {
        temp=mat[rstart][cstart];
        for(int i=cstart+1;i<=cend;i++)
        {
            swap(temp,mat[rstart][i]);
            count++;
        }
        rstart++;
        for(int i=rstart;i<=rend;i++)
        {
            swap(temp,mat[i][cend]);
            count++;
        }
        cend--;
        for(int i=cend;i>=cstart;i--)
        {
            swap(temp,mat[rend][i]);
            count++;
        }
        rend--;
        for(int i=rend;i>=rstart;i--)
        {
            swap(temp,mat[i][cstart]);
            count++;
        }
        cstart++;
        mat[rstart-1][cstart-1]=temp;
        count++;
    }

}