#include <iostream> 
#include <vector> 
#include <string>
#include <cstring>
#include <bits/stdc++.h>
//http://codeforces.com/contest/66/problem/B
using namespace std; 
int main()
{
    int len;
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++)
    cin>>arr[i];
    int h[1001];
    for(int i=0;i<len;i++)
    h[i]=0;
    int s=0;
    for(int i=0;i<len;i++)
    {
        for(int j=i-1;j>=0&&arr[j]<=arr[j+1];j--)
        {
            h[i]++;
        }
        for(int j=i+1;j<len&&arr[j]<=arr[j-1];j++)
        {
            h[i]++;
        }
    }
    // for(int i=0;i<len;i++)
    // cout<<h[i]<<" ";
    int m=0;
    for(int i=0;i<len;i++)
    m=max(m,h[i]);
    cout<<m+1;
    return 0;
}