#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <cstring>
#define ll long long
using namespace std;
//https://codeforces.com/problemset/problem/519/C
int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int a,b;
      cin>>a>>b;
      int ans=0;
      while(a>0&&b>0)
      {
            if(a==1&&b==1)
            break;
            else if(a>b)
            {
                  a-=2;
                  b--;
            }
            else if(a<=b)
            {
                  a--;
                  b-=2;
            }
            ans++;
      }
      cout<<ans;
      return 0;
}
