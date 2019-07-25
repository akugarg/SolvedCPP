#include<stdio.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>
//https://codeforces.com/contest/721/problem/A
//Author: Akanksha Garg
int main()
 {
     int n;
     scanf("%d\n",&n);
     int sz[n];
     char str[n];
     gets(str);
     int c=0;
     int s=0;
     for(int i=0;i<n;i++)
     {
         if(str[i]=='W')
         continue;
         else
         {
             for(int j=i;j<=n;j++)
             {
                 if(str[j]=='B')
                 {
                     s++; 
                 }
                 else
                 {
                    //  printf("%d %d\n",s,i);
                     sz[c++]=s;
                     i+=s-1;
                     s=0;
                     break;
                 }
             }
         }
     }
     printf("%d\n",c);
     for(int i=0;i<c;i++)
     printf("%d ",sz[i]);
     return 0;
  }
