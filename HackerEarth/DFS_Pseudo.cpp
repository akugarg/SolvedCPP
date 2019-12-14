#include <iostream>
#include <bits/stdc++.h>
#define MAX INT_MAX
using namespace std;
vector<int> arr[100]; //taking maximum nodes =100
int vis[100]={0};
	
void dfs(int s)
{
  vis[s]=1;
  for(int i=0;i<arr[s].size();i++)
  {
      if(vis[arr[s][i]==0])
      dfs(arr[s][i]);
  }
}

int main()
{
	int n,m;
	cin>>n>>m;
	int x,y;
	for(int i=1;i<=m;i++)
	{
	    cin>>x>>y;
	    arr[x].push_back(y);
	    arr[y].push_back(x);
	}
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        dfs(i);
    }
    for(int i=1;i<=n;i++)
    cout<<vis[i]<<endl;
	return 0;
}
