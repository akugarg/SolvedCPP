#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#define ll long long
using namespace std;
//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/monk-and-new-array/description/
int main()
{
	long n,m;
	cin>>n>>m;
    vector<long long> arr[n];
    long g;
 	double no= INFINITY;
	for(int i=0;i<n;i++)
	{
	      for(int j=0;j<m;j++)
	    {
	        cin>>g;
	        arr[i].push_back(g);
	    }
	    sort(arr[i].begin(),arr[i].end());
	}

    long temp[m];
    for(int i=0;i<m;i++)
    temp[i]=arr[0][i];
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
             int bd=upper_bound(temp,temp+m,arr[i][j])-temp;
             if(bd!=0)
             no=min(no,abs(arr[i][j] - (double)temp[bd-1]));
             else
             no=min(no,abs(arr[i][j] - (double)temp[bd]));
        }
       for(int j=0;j<m;j++)
       temp[j]=arr[i][j];
    }
    cout<<no<<endl;
	return 0;
}
