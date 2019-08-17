#include <iostream>
#include <bits/stdc++.h>
#include <set>
#include <cmath>
#define pb push_back
//Author Akanksha
using namespace std;
int main()
{
      int n;
      int t1,t2;
      double k;
      cin>>n>>t1>>t2>>k;
      int x=n;
      double rate=(1-k/100);
      // cout<<rate<<endl;
      vector <pair<double,int> >vect;
      int c=1;
      while(n--)
      {
            int a,b;
            cin>>a>>b;
            double  ans;
            double x=a*t1*rate + (double)b*t2;
            double y=b*t1*rate + a*t2;
            // cout<<x<<" "<<y<<endl;
            ans = max(x,y);
            vect.pb(make_pair(ans,-1*(c++)));
      }
      sort(vect.begin(),vect.end());
      for(int i=x-1;i>=0;i--)
      cout<<-1*vect[i].second<< ' '<< fixed << setprecision(2)<<vect[i].first<<"\n";
      return 0;
      
}
