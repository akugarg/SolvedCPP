#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/practice-problems/algorithm/monk-learning-graph-3/description/
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    cin>>arr[i];  //storing weights
    vector<pair<int ,int>>ar[n+1];
    int x,y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        ar[x].push_back(make_pair(arr[y],y));
        ar[y].push_back(make_pair(arr[x],x));
    }
    
    for(int i=1;i<=n;i++)
    sort(ar[i].begin(),ar[i].end());
    
    for(int i=1;i<=n;i++)
    {
        if(ar[i].size()<k)
        cout<<"-1"<<endl;
        else
        cout<<(ar[i][ar[i].size()-k].second)<<endl;
    }
    
	return 0;
}
