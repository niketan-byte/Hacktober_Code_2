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
    int mx = INT_MIN;
    int mn  = INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(a[i]>mx)
        {
            mx = a[i];
        }
        if(a[i]<mn)
        {
            mn = a[i];
        }

       // Inbuilt function to find max and min
        // mx = max(mx,a[i]);
        // mn = min(mn,a[i]);
        
           
    }
    cout<<mx<<" "<<mn<<endl;
    return 0;
}