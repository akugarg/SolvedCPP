#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

int main()
{
      queue <int> a,b ,c;
      int c1=0,c2=0,c3=0;
      int n;
      cin>>n;
      int no;
      for(int i=1;i<=n;i++)
      {
            cin>>no;
            if(no==1)
            {
                  c1++;
                  a.push(i);
            }
            else if(no==2)
            {
                  c2++;
                  b.push(i);
            }
            else if(no==3)
            {
                  c3++;
                  c.push(i);
            }
      }
      int ans=min(c1,min(c2,c3));
      cout<<ans<<endl;
      for(int i=1;i<=ans;i++)
      {
        cout<< a.front() << " "<< b.front() << " "<< c.front() <<endl;
        a.pop();
        b.pop();
        c.pop();
      }
      return 0;
}