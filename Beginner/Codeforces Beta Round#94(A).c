#include<math.h>
#include<string.h>
#include <stdlib.h>
//https://codeforces.com/contest/129/problem/A
int main()
 {
     int n;
     scanf("%d\n",&n);
     int arr[n];
     for(int i=0;i<n;i++)
     scanf("%d ",&arr[i]);
     int co=0;
     int ce=0;
     for(int i=0;i<n;i++)
     {
         if(arr[i]%2==0)
         ce++;
         else
         co++;
     }
     if(co%2==0)
     printf("%d\n",ce);
     else
     printf("%d\n",co);
     return 0;
  }
