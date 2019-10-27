#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
//https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/balanced-partition-818edecd/description/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x,y,z;
        vector <pair<int,int>> vect;
        int sum=0;
        while(n--)
        {
            cin>>x>>y>>z;
            vect.pb(make_pair(y-x,z));
            sum+=z;
        }
        // cout<<sum<<endl;
        sort(vect.begin(),vect.end());
        for(int i=1;i<vect.size();i++)
        vect[i].second+=vect[i-1].second;
        //cout<<vect[1].second<<endl;
        int prev=0;
        int flag=0;
        for(int i=0;i<vect.size();i++)
        {
            if(sum-vect[i].second==prev)
            {
                flag=1;
                break;
            }
            prev+=vect[i].second;
            // cout<<prev<<sum<<endl;
            if(sum-prev==prev)
            {
                // cout<<"*";
               flag=1;
               
               break;
            }
            // cout<<flag;
        }
        if(flag==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}
