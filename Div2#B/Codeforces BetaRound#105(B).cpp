#include <iostream>
#include <bits/stdc++.h>
// ESCAPE
using namespace std;
int main()
{
      double vp,vd,t,f,m;
      cin>>vp>>vd>>t>>f>>m;
      double dis=vp*t;
      double ve=abs(vd-vp);
      int ans=0;
      if(vp>=vd)
      {
            cout<<0;
            return 0;
      }
      while(dis<m)
      {
        t=dis/(ve);
        dis += vp*t;
        if(dis>=m)
        break;
        dis += vp*(t+f);
        ans++;
      }
      cout<<ans;
      return 0;
}
