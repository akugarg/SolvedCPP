#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#define ll long long
using namespace std;
//https://www.codechef.com/problems/ANUUND
int main()
{
    long t;
    cin>>t;
    ll n;
    ll tmp;
    while(t--)
    {
       cin>>n;
       ll arr[n];
       for(ll i=0;i<n;i++)
       cin>>arr[i];
       sort(arr,arr+n);
       for(ll i=0;i<n-1;i++)
       {
           if(i%2!=0)
           {
               tmp=arr[i];
               arr[i]=arr[i+1];
               arr[i+1]=tmp;
           }
       }
       for(ll i=0;i<n;i++)
       cout<<arr[i]<<" ";
       cout<<endl;
    }
	return 0;
}
