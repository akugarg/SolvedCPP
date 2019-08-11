#include <iostream>
#include <utility>
#include <bits/stdc++.h>
#include <boost/math/common_factor.hpp>
#include <limits>
#include <math.h>
#define ll long long
using namespace std;
//Author :: akanksha garg
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   
	    ll arr[n];
	    ll lcm;
	   // ll min=std::numeric_limits<ll>::infinity();
	    ll min=INFINITY;
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	   // pair <ll,ll> p;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            lcm=boost::math::lcm(arr[i],arr[j]);
	            min=std::min(lcm,min);
	           // cout<<min<<endl;
	           //cout<<arr[i]<<","<<arr[j]<<"\n";
	        }
	         
	    }
	   cout<<min<<"\n";
	}
	return 0;
}
