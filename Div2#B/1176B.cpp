#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/1176/B
long long a,b,c,n,i,t;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		a=b=c=0;
	  	while(n--)
    {
      cin>>i
			a+=(i%3==0);
			b+=(i%3==2);
			c+=(i%3==1);
      }
		a+=min(b,c);
		
		cout<<a+abs(b-c)/3<<endl;
	}
}
