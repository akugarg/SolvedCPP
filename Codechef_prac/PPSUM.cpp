#include <iostream>
#include <bits/stdc++.h>
//#define fl(a) for(int i;i<=a;i++)
using namespace std;
int sum(int a)
{
    // cout<<a<<"*"<<endl;
    int s=0;
    for(int i=1;i<=a;i++)
    s+=i;
    return s;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	int x;
	int d,n;
	while(t--)
	{
	    cin>>d>>n;
	    x=n;
	    for(int i=1;i<=d;i++)
	    {
	       // cout<<n<<"\n";
	        n=sum(n);
	    }
	    cout<<n<<"\n";
	}
	
	return 0;
}
