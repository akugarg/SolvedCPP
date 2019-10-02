#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <cstring>
#define ll long long
using namespace std;
//https://codeforces.com/problemset/problem/515/C
int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int n;
      cin>>n;
      char ch;
      int count[4]={0};
      for(int i=0;i<n;i++)
      {
            cin>>ch;
            int m=ch-'0';
            if(m==2)
            count[0]++;
            else if(m==3)
            count[1]++;
            else if(m==4)
            {
                  count[1]++;
                  count[0]+=2;
            }
            else if(m==5)
            count[2]++;
            else if(m==6)
            {
               count[2]++;
               count[1]++;
            }
            else if(m==7)
            count[3]++;
            else if(m==8)
            {
                  count[3]++;
                  count[0]+=3;
            }
            else if(m==9)
            {
                count[3]++;   
                count[1]+=2;
                count[0]++;
            }
      }
      for(int i=3;i>=0;i--)
      {
            for(int j=1;j<=count[i];j++)
            {
                  if(i==3)
                  cout<<7;
                  else if(i==2)
                  cout<<5;
                  else if(i==1)
                  cout<<3;
                  else if(i==0)
                  cout<<2;
            }
      }
      return 0;
}