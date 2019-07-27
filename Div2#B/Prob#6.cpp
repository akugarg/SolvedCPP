#include <iostream> 
//http://codeforces.com/contest/102/problem/B
#include <vector> 
#include <string>
#include <cstring>
#include <bits/stdc++.h>
#define ll long long
using namespace std; 
int main()
{
    string str;
    cin>>str;
    int co=0;
    ll n=0;
    ll n2=0;
    if(str.length()==1)
    co=0;
    else
    {
      co=1;
      for(int i=0;i<str.length();i++)
      n+= (str[i]-'0');
    //   cout<<n<<endl;
      while(n/10!=0)
      {
         while(n!=0)
         {
             n2+=n%10;
             n/=10;
         }
         n=n2;
         co++;
         n2=0;
      }
    }
    cout<<co;
    return 0;
}
