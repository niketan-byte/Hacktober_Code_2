#include<bits/stdc++.h>
using namespace std;

map<char,int> vis;
std::vector<vector<char> > adj(21);

void dfs(char node)
{
    vis[node]=1;
    for(int child:adj[node])
    {
        if(vis[child]==0)
        {
            dfs(child);
        }
    }
}

 int32_t main()
{
    int n,m;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    cout<<"Enter the number of edges"<<endl;
    cin>>m;
  	cout<<"Enter "<<m<<" lines containing two nodes each describing the vertices connected by a particular edge."<<endl;
    for(int i=0;i<m;i++)
    {
        char a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs('A');
    int count=0;
    for(char i='A';i<char(i+n);char(i++))
    {
        if(vis[i]==1){
        	count++;
		}  
    }
    if(count==n)
    {
    	cout<<"Yes,The graph is connected"<<endl;
	}
	else
	{
		cout<<"No,The graph is not connected"<<endl;
	}
    
}   
