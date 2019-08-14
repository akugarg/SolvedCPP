#include <iostream>
#include <bits/stdc++.h>
#define ll long 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    ll n;
    while(t--)
    {
      cin>>n;
      ll c[n];
      ll h[n];
      for(ll i=0;i<n;i++)
      cin>>c[i];
    //   scanf("%d ",&c[i]);
      for(ll i=0;i<n;i++)
      cin>>h[i];
      ll ans[n]={0};
      for(ll i=0;i<n;i++)
      {
          for(ll j=i+1-c[i];j<=i+1+c[i];j++)
          {
              if(j-1>=0&&j-1<n)
              {
                  ans[j-1]++;
              }
          }
      }
    sort(ans,ans+n);
    sort(h,h+n);
    int flg=1;
    for(ll i=0;i<n;i++)
    {
        if(h[i]!=ans[i])
        {
            flg=0;break;
            // cout<<"NO"<<"\n";
        }
    }
    if(flg==1)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
    }
	return 0;
}
