#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        int arr[n];
        int ans[n]={};
        for(int i=0;i<n;i++)
        {
            if(i==0)
            cin>>arr[i];
            else
            {
                cin>>arr[i];
                for(int j=i-1;j>=0;j--)
                {
                   if(arr[j]%arr[i]==0)
                   ans[i]++; 
                }
            }
        }
         int *max=max_element(ans,ans+n);
        cout<<*max<<"\n";
        // for(int i=0;i<n;i++)
        // cout<<ans[i]<<endl;
    }
	return 0;
}