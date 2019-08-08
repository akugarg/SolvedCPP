#include <iostream>
#include <bits/stdc++.h>
#define ull long long int 
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    ull n,a,b,k;
	    cin>>n>>a>>b>>k;
	    ull x=0;
	    for(ull i=1;i<=n;i++)
	    {
	        if(i%a==0&&i%b!=0)
	        x++;
	        if(i%b==0&&i%a!=0)
	        x++;
	    }
	    if(x>=k)
	    cout<<"Win"<<"\n";
      else
	    cout<<"Lose"<<"\n";
	}
	return 0;
}
