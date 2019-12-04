#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/hunger-games/
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(i+2<n)
        ans=max(ans,(arr[i+2]-arr[i]));
        else
        break;
    }
    cout<<ans<<endl;
	return 0;
}
