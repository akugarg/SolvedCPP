#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    scanf("%d ",&t);
    int n,m,q;
    int x,y;
    while(t--)
    {
       int ans=0;
       scanf("%d %d %d\n",&n,&m,&q);
       int arr[n][m]={};
      while(q--)
      {
      scanf("%d %d\n",&x,&y);
      for(int i=0;i<m;i++)
      arr[x-1][i]++;
      for(int i=0;i<n;i++)
      arr[i][y-1]++;
      }
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
              if(arr[i][j]%2!=0)
              ans++;
               }
      }   
    printf("%d\n",ans);
     }
	return 0;
}