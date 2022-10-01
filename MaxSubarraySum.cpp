// Brute Force (n^3)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

   // Generate all subarray using 3 nested loops
   int sum=INT_MIN;
   int left = -1;
   int right = -1;
   for(int i=0;i<n;i++)
   {   
       for(int j=i;j<n;j++)
       {   
           int curr_sum = 0;
           for(int k=i;k<=j;k++)
           {
               curr_sum = curr_sum + a[k];
               if(curr_sum>sum)
               {
                   sum = curr_sum;
                   left=i;
                   right=j;
               }
           }
          
       }
       
        
   }
   cout<<sum<<endl;
   
   for(int i=left;i<=right;i++)
   {
       cout<<a[i]<<" ";
   }
    return 0;
}