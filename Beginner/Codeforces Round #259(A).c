#include<stdio.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>
int main()
 {
     int n;
     scanf("%d\n",&n);
     int in=1;
     int s=n/2 + 1;
     for(int i=1;i<=s;i++)
     {
         for(int j=s-i;j>0;j--)
         printf("*");
         for(int j=1;j<=in;j++)
         printf("D");
         for(int j=s-i;j>0;j--)
         printf("*");
         printf("\n");
         in+=2;
     }
     in=n-2;
     for(int i=1;i<=s-1;i++)
     {
         for(int j=1;j<=i;j++)
         printf("*");
         for(int j=1;j<=in;j++)
         printf("D");
         for(int j=1;j<=i;j++)
         printf("*");
         in-=2;
         printf("\n");
     }
      return 0;
  }
