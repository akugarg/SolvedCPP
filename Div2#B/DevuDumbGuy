#include <iostream> 
#include <vector> 
#include <string>
#include <cstring>
#include <bits/stdc++.h>
#define ll long long
using namespace std; 

//http://codeforces.com/contest/439/problem/B

int main()
{
    long n,k;
    cin>>n>>k;
    long arr[n];
    ll ans=0;
    for(long i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
          if(k!=1)
          {
                ans+=(ll)arr[i]*(k--); //will create signed integer overflow if not typecasted to ll
          }
          else
          ans+=arr[i];
    }
    cout<<ans;
    return 0;
}
