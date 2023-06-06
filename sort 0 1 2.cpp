#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int low=0;
   int end=n-1;
   int mid=0;
   while(mid<=end)
   {
      if(arr[mid]==0)
      {
         swap(arr[mid],arr[low]);
         low++;
         mid++;
      }
      else
      if(arr[mid]==2)
      {
         swap(arr[mid],arr[end]);
         end--;
         // i--;
      }
      else
      if(arr[mid]==1){
         // cout<<"mid: "<< mid<<" ";
      mid++;}
   }
}