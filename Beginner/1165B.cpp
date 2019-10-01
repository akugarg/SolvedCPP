#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      cin>>arr[i];
      sort(arr,arr+n);
      int a=1;
      int ans=0;
      for(int i=0;i<n;i++)
      {
            if(arr[i]>=a)
            {
                  ans++;
                  a++;
            }
            else
            continue;
      }
      cout<<ans;
      return 0;
}