#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int d[n];
	    int p[n];
	    for(int i=0;i<n;i++)
	    cin>>d[i]>>p[i];
	    int q;
	    cin>>q;
	    while(q--)
	    {
	        int dy,r;
	        cin>>dy>>r;
	        int x=0;
           for(int i=0;i<n;i++)
	        {
	            if(dy>=d[i])
	            {
	                x+=p[i];
	            }
	            else
	            break;
	        }
	        if(x>=r)
	        cout<<"Go Camp"<<endl;
	        else
	        cout<<"Go Sleep"<<"\n";
	        x=0;
	    }
	}
	return 0;
}
