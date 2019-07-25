#include<stdio.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>
//https://codeforces.com/contest/711/problem/A
int main()
 {
     int n;
     scanf("%d\n",&n);
     int flag=0;
     int r,in;
     char str[n][5];
     for(int i=0;i<n;i++)
     {
         scanf("%s\n",&str[i]);
         if((str[i][0]=='O'&&str[i][1]=='O')&&flag==0)
         {
             flag=1;
             str[i][0]='+';
             str[i][1]='+';
         }
         else if((str[i][3]=='O'&&str[i][4]=='O')&&flag==0)
         {
             flag=1;
             str[i][3]='+';
             str[i][4]='+';
         }
     }
     
     if(flag)
     printf("YES\n");
     else
     printf("NO\n");
     if(flag){
     for(int i=0;i<n;i++)
     {
       for(int j=0;j<5;j++)
       printf("%c",str[i][j]);
       printf("\n");
     }}
     return 0;
  }
