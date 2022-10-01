#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int a[],int n)
{
    for(int i=1;i<=n-1;i++)
    {
        int curr = a[i];
        // place the current element(curr) in its correct position (right side) in sorted array
        
        int j=i-1;
        while(j>=0 && a[j]>curr)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=curr;
    }
}

int main()
{
     int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    InsertionSort(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}