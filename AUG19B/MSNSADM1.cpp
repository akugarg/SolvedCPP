#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	int n;
	long a=0;
	while(t--)
	{
	    cin>>n;
	    int a1[n];
	    int b2[n];
	    long ans[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a1[i];
	    }
	    for(int i=0;i<n;i++)
	    cin>>b2[i];
	    for(int i=0;i<n;i++)
	    {
	        a=a1[i]*20-b2[i]*10;
	        if(a>0)
	        ans[i]=a;
	        else
	        ans[i]=0;
	    }
        sort(ans,ans+n);
	    cout<<ans[n-1]<<"\n";
	    
	}
	return 0;
}