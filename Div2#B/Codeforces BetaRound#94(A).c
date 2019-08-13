#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;
//https://codeforces.com/contest/129/problem/B
int main()
{
     int n,m;
     cin>>n>>m;
     int arr[102][102]={0};
     int a,b;
     for(int i=0;i<m;i++)
     {
          cin>>a>>b;
          arr[a-1][b-1]=1;
          arr[b-1][a-1]=1;
     }
         
     int as=0;   //stores no. of groups that will be leaving.
     while(1)
     {
       set<int> st1;
       int ans=0; //as a flag variable
       for(int i=0;i<n;i++)
       {
             int l=0; 
             for(int j=0;j<n;j++)
             {
                   if(arr[i][j]==1)
                   l++;
             }
             if(l==1)
             {
                   st1.insert(i);
                   ans=1;
             }
       }
       if(ans==0)
       break;
       as++;
       for(int i=0;i<n;i++)
       {
             if(st1.count(i))
             {
                   for(int j=0;j<n;j++)
                    {
                        if(arr[i][j]==1)
                        {
                            arr[i][j]=0; //removing edges
                            arr[j][i]=0;
                            break;
                        }
                    }
              }
       }
       
    }
    cout<<as<<endl;
     return 0; 
}
