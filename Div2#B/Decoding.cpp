#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <cstring>
#define ll long long
using namespace std;
//https://codeforces.com/problemset/problem/746/B
int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int n;
      cin>>n;
      char str[2001];
      cin>>str;
      char ans[n];
      if(n%2==0)
      {
         ans[n/2-1]=str[0];
         int a=n/2;
         for(int i=1;i<n;i+=2)
         {
            ans[a++]=str[i];   
         }
         int b=n/2-2;
         for(int i=2;i<n;i+=2)
         {
               ans[b--]=str[i];
         }
      }
      else
      {
            ans[n/2]=str[0];
            int a=n/2+1;
            int b=n/2-1;
            for(int i=1;i<n;i+=2)
            {
               ans[b--]=str[i];
            }
            for(int i=2;i<n;i+=2)
            ans[a++]=str[i];
      }
      for(int i=0;i<n;i++)
      cout<<ans[i];
      return 0;
}
