#include <iostream> 
#include <vector> 
#include <string>
#include <cstring>
#include <bits/stdc++.h>
#define ll long long
using namespace std; 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll arr[n];
    ll dis[n];
    ll in[n];
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    int c=0;ll s=0;
//     for(int i=0;i<n;i++)
//     cout<<arr[i]<<endl;
    for(ll i=0;i<n;i++)
    {
          if(arr[i]==arr[i+1])
          c++;
          else
          {
                dis[s]=c+1;
                in[s]=arr[i];
                s++;
                c=0;
          }
    }
//     for(ll i=0;i<s;i++)
//     cout<<dis[i]<<" ";
       sort(in,in+n);
     if(s>=4)
     cout<<"No";
     else if(s==3)
     {
         if(2*in[1]==in[0]+in[2])
         cout<<"Yes";
         else
         cout<<"No";
     }
     else
     cout<<"Yes";
     
    return 0;
}
