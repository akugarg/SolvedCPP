#include <iostream>
#include <bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/hectic-game-2e74ada4/description/
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 
  
int main() 
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        vector<pair<int ,int>>vect;
        long a,b;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            vect.pb(make_pair(a,b));
        }
        sort(vect.begin(), vect.end(), sortbysec);
        int c=1;
        vector<int> a1;
        vector<int> a2;
        int x;
        while(vect.size()!=0)
        {
            int a=1,b=1;
            x=vect[0].second;
            // cout<<x<<endl;
            vect.erase(vect.begin());
            // cout<<vect[0].second<<endl;
            // cout<<vect.size()<<endl;
            if(c%2!=0)
            {
                for(int i=0;i<vect.size();i++)
                {
                    // cout<<vect[i].second<<endl;
                    if(vect[i].first>x)
                    {
                        a++;
                        x=vect[i].second;
                        //  cout<<x<<endl;
                        vect.erase(vect.begin()+i);
                        i--;
                    }
                }
                // cout<<a<<endl;//2---1
                a1.pb(a);
                c++;
            }
            else
            {
               for(int i=0;i<vect.size();i++)
                {
                    if(vect[i].first>x)
                    {
                        b++;
                        x=vect[i].second;
                        vect.erase(vect.begin()+i);
                        i--;
                    }
                }
                a2.pb(b); 
                c++;
            }
            
        }
        int ans1=a1[0],ans2=a2[0];
        for(int i=1;i<a1.size();i++)
        ans1^=a1[i];
        for(int i=1;i<a2.size();i++)
        ans2^=a2[i];
        if(ans1>ans2)
        cout<<"Alice"<<"\n";
        else if(ans2>ans1)
        cout<<"Bob"<<"\n";
        else
        cout<<"Tie"<<endl;
    }
	return 0;
}
