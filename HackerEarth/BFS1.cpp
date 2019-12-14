#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands/
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> v[n+1];
        int vis[n+1]={0};
        int dis[n+1]={0};
        int x,y;
        for(int i=1;i<=m;i++)
        {
            cin>>x>>y;
            v[x].push_back(y); 
            v[y].push_back(x);
        }
        int s=1;
        dis[s]=0;
        vis[s]=1;
        queue<int> q;
        q.push(s);
        while(!q.empty())
        {
            s=q.front();
            // cout<<s<<endl;
            q.pop();
            for(int i=0;i<v[s].size();i++)
            {
                if(vis[v[s][i]]==0)//if not visited
                {
                    dis[v[s][i]]=dis[s]+1;
                    vis[v[s][i]]=1;
                    q.push(v[s][i]);
                }
            }
        }
        cout<<dis[n]<<endl;
    }
	return 0;
}
