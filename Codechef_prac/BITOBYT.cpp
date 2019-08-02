#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
// 	cout<<t;
	int n;
	while(t--)
	{
	    cin>>n;
	    int a=1,b=0,c=0;
	    while(n>0)
	    {
	        for(int i=1;i<=a;i++)
	        {
	            if(n-2>0)
	            {
	                a--;
	                b++;
	            }
	               n-=2;
	        }
          for(int i=1;i<=b;i++)
	        {
	            if(n-8>0)
	            {
	                c++;
	                b--;
	               
	            }
	             n-=8;
	              
	        }
	
	        for(int i=1;i<=c;i++)
	        {
	        
	            if(n-16>0)
	            {
	               // cout<<"*";
	                c--;
	                a+=2;
	            }
	             n-=16;
	        }
	    }
	    cout<<a<<" "<<b<<" "<<c<<"\n"; 
	}
	    
	return 0;
}
