#include <iostream>
#include <bits/stdc++.h>
#define ll unsigned long long int 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
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
        ll in=0;
        int cy=0;
        while(n>0)
        {
          if(in<k){
               b[in++]+=k;
               n-=k;
          }
          else if(in>=k)
          in=0;
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
