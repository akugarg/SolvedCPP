#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      char str[100];
      cin>>str;
      int l=strlen(str);
      // cout<<l;
      int ans=0;
      char p='a';
      char ch;
      int a,b,c;
      for(int i=0;i<l;i++)
      {
            ch=str[i];
            a=abs((int)ch-(int)p);
            b=26+((int)ch-(int)p);
            // c=(122-(int)p)-((int)ch-97)+1;
             c= abs((int)ch- (26+(int)p));
            ans+=min(a,min(b,c));
            p=str[i];
            // cout<<p<<endl;
            // cout<<a<<endl<<b<<endl<<c<<endl;
      }
      cout<<ans;
      return 0;
}
