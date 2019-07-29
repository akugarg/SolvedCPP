#include <iostream>
#include <bits/stdc++.h>
#define ll long long
// #define fr(a) for(ll i=1;i<=a;i++)
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	ll n;
	int c=0;
	while(t--)
	{
	    cin>>n;
	    for(ll i=1;i<=n;i++)
	    {
	        if (n-i>=0)
	        c++;
	        else
	        break;
	        n=n-i;
	    }
	    
	    cout<<c<<endl;
	    c=0;
	}
	return 0;
}
