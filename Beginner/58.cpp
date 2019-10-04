#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <cstring>
#define ll long long
using namespace std;

int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int s=0;
      char ch[101];
      cin>>ch;
      int l=strlen(ch);
      // cout<<l;
      for(int i=0;i<l;i++)
      {
        if(ch[i]=='h'&&s==0)
        s++;
        else if(ch[i]=='e'&&s==1)
        s++;
        else if(ch[i]=='l'&&s==2)
        s++;
        else if(ch[i]=='l'&&s==3)
        s++;
        else if(ch[i]=='o'&&s==4)
        s++;
      //   cout<<s<<endl;
      }
        if(s==5)
        cout<<"YES";
        else
        cout<<"NO";
      return 0;
}
