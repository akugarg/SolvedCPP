#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
//https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/shubham-and-xor-8526868e/description/
ll fact(ll p)
{
    ll a=(p*(p-1))/2;
    return a;
}
int main()
{
    ll n;
    cin>>n;
    int arr[n];
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    // for(ll i=0;i<n;i++)
    // cout<<arr[i]<<" ";
    ll ans=0;
    ll p=1;
    for(ll i=1;i<=n;i++)
    {
       if(arr[i]==arr[i-1])
       {
           p++;
           continue;
       }
            //  cout<<p;
             ans+=fact(p);
            //  cout<<fact(p)<<endl;
             p=1;
    }
    cout<<ans;
	return 0;
}
