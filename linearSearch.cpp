#include<bits/stdc++.h>
using namespace std;

int main(){
int n,key;
int a[1000];

cin>>n;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}

cin>>key;
int i;
for(i=0;i<n;i++)
{
    if(a[i]==key)
    {
        cout<<"Element found at index "<<i<<endl;
        break;
    }

}

if(i==n)
{
    cout<<"Element not found"<<endl;
}
return 0;
}

