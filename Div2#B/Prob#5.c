#include<stdio.h>
#include<math.h>
 
int main()
  {
    int n;
    scanf("%d\n",&n);
    int arr[n+1];
    arr[0]=0;
    int p=0;
    int e=0;
    int a=0;
    for(int i=1;i<=n;i++)
    scanf("%d ",&arr[i]);
    for(int i=0;i<n;i++)
    {
       a=arr[i]-arr[i+1];
       if(a<0)
       {
           //printf("*");
           if(abs(a)>e)
           {
               p+=(arr[i+1]-arr[i]-e);
               e=0;
           }
           else if(abs(a)<=e)
           {
               e=e-abs(a);
           }
       }
       else if(a>=0)
       {
           e+=(arr[i]-arr[i+1]);
       }
    }
    printf("%d",p);
   return 0;
  }
