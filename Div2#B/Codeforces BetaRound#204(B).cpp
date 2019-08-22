#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
//http://codeforces.com/contest/352/problem/B
int count(vector <int>x)
{
      if(x.size()==1)
      return 0;
      
      else if(x.size()==2)
      return (x[1]-x[0]);
      
      else 
      {
          int diff=x[1]-x[0];
          for(int i=0;i<x.size()-1;i++)
          {
              if(diff != x[i+1]-x[i])
              return -1;
          }
          return diff;
      }
}
int main()
{
      int n;
      cin>>n;
      map<int,vector<int> >mp;
      int no;
      
      for(int i=0;i<n;i++)
      {
           cin>>no;
           mp[no].push_back(i);
      }
      int p=0;
      for(auto x:mp)
      {
      //     cout<<x.first<<endl;       
             int ans=count(x.second);
             if(ans!=-1)
             p++;
      }
      cout<<p<<endl;
       for(auto x:mp)
      {
        
             int ans=count(x.second);
             if(ans!=-1)
             cout<<x.first<<" "<<ans<<"\n";
      }
      return 0;
}
