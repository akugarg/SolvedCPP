#include <iostream>
#include <vector>
#include <string.h>
#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
// #define f(i,x) for(int i=1;i<=x;i++)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int curr,prev;
        int r=1;
        vector<int> vect;
        vector<string> str;
        string s;
        int l;
        for(int i=0;i<n;i++)
        {
           cin>>s;
           str.pb(s);
           l=s.length();
           int c;
           int tym=0;
           if(s[0]=='d'||s[0]=='f')
           c=0;
           else if(s[0]=='j'||s[0]=='k')
           c=1;
           tym+=2;
        //   cout<<c<<endl;
           for(int i=1;i<l;i++)
           {
            
               if(s[i]=='d'||s[i]=='f')
               {
                   if(c==0)
                   tym+=4;
                   else
                   tym+=2;
                   c=0;
               }
              else if(s[i]=='j'||s[i]=='k')
               {
                   if(c==0)
                   tym+=2;
                   else
                   tym+=4;
                   c=1;
               }
               
           }
        //   cout<<tym<<endl;
           vect.pb(tym);
        }
        
    return 0;
}
