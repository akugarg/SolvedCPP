#include <iostream>
#include <bits/stdc++.h>
#define ll unsigned long long int 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[k];
        ll b[k]={0};
        ll x=n/k;
        for(ll i=0;i<k;i++)
        a[i]=x;
        while(n>0)
        {
          sort(b,b+k);
          b[0]+=k;
          n-=k;
        }
        // for(ll i=0;i<k;i++)
        // cout<<b[i]<<"*";
         int flg=0;
       for(ll i=0;i<k;i++)
       {
           if(a[i]!=b[i])
           {
               flg=1;
               break;
           }
       }
       if(flg==1)
       cout<<"YES"<<"\n";
       else
       cout<<"NO"<<"\n";
        
    }
	return 0;
}
