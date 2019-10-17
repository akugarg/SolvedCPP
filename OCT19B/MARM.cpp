#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int t;
    cin>>t;
    ll n,k;
    while(t--)
    {
      cin>>n>>k;
      ll arr[n];
      for(ll i=0;i<n;i++)
      cin>>arr[i];
      for(ll i=0;i<k;i++)
      arr[i%n]=(arr[i%n])^(arr[n-(i%n)-1]);
      
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<"\n";
    }
	return 0;
}