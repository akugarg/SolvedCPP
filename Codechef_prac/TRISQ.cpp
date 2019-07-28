#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int len;
    int ans=0;
    while(t--)
    {
        cin>>len;
        while(len>0)
        {
            ans+=(len-2)/2;
            len=len-2;
        }
        cout<<ans<<endl;
        ans=0;
    }
	return 0;
}
