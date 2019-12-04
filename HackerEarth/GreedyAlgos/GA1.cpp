#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        int max;
        int ans=0;
        int arr[n];int g;
        for(int i=0;i<n;i++)
        {
            cin>>g;
            if(i==0)
            {
                max=g;
                ans++;
            }
            else
            {
                if(g>max)
                {
                    ans++;
                    max=g;
                }
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}