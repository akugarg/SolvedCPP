#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;
// CHAT ONLINE
int main()
{
     int p,q,l,r;
     cin>>p>>q>>l>>r;
     int a[p];
     int b[p];
     int c[q];
     int d[q];
     for(int i=0;i<p;i++)
     cin>>a[i]>>b[i];
     for(int i=0;i<q;i++)
     cin>>c[i]>>d[i];
     
    int ans=0;
    int flg=0;
    for(int i=l;i<=r;i++)
    {
          for(int m=0;m<p&&flg==0;m++)
          {
                for(int n=0;n<q;n++)
                {
                    //  if((c[n]+i>=a[m]&&c[n]+i<=b[m]) || (d[n]+i>=a[m]&&d[n]+i<=b[m]))
                    //  {
                    //        flg=1;
                    //        cout<<i<<endl;
                    //        break;
                    //  }
                     if(b[m]<c[n]+i || a[m]>d[n]+i)
                     continue;
                     else{
                          flg=1;
                          break;
                     }
                     
                     
                }
                // if(flg==1)
                // break;
          }
         if(flg==1)
         {
               ans++;
               flg=0;
         }
    }
    cout<<ans<<endl;
     return 0; 
}
