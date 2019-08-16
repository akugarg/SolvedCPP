#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;
int fact(int n)
{
      int f=1;
      for(int i=2;i<=n;i++)
      f*=i;
      return f;
}
int main()
{
     string s1,s2;
     cin>>s1>>s2;
     char ch;
     int l=s1.length();
     int l2=s2.length();
     int val=0,curr=0,diff;
     int u=0;
     for(int i=0;i<l;i++)
     {
         ch=s1[i];
         if(ch=='+')
         val++;
         else
         val--;
     }
     for(int i=0;i<l2;i++)
     {
         ch=s2[i];
         if(ch=='+')
         curr++;
         else if(ch=='-')
         curr--;
         else if(ch=='?')
         u++;
     }
     diff=val-curr;
//     cout<<diff<<endl;
     int a=abs(diff);
     if(u==0 && a==0)
     printf("%.12f\n",1.0);
     else if(u<a||(u-a)%2!=0)
     printf("%.12f\n",0);
     else
     {
           double m=pow(2,u);
           int x=a+(u-a)/2;
           int y=(u-a)/2;
           int f1=fact(x);
           int f2=fact(y);
           int f3=fact(u);
           int an=f3/(f2*f1);
           double ans= an/m;
          printf("%.12f\n",ans);
     }
     return 0; 
}
