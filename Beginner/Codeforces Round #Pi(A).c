#include<stdio.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>
int min(int x,int y)
{
    if(x<y)
    return x;
    else
    return y;
}
int max(int x,int y)
{
    if(x>y)
    return x;
    else
    return y;
}
int main()
  {
      int arr[100001];
      int n;int s=0;
      scanf("%d\n",&n);
      int a=0,b=0;
      for(int i=0;i<n;i++)
      scanf("%d ",&arr[i]);
    //   for(int i=0;i<n;i++)
    //   printf("%d ",arr[i]);
      for(int i=0;i<n;i++)
      {
          a=0,b=0;
          if(i==0)
          {
              a=abs(arr[i]-arr[i+1]);
              b=max(abs(arr[i]-arr[n-1]),abs(arr[i]-arr[0]));
          }
          else if(i==n-1)
          {
              a=abs(arr[i]-arr[i-1]);
              b=abs(arr[i]-arr[0]);
          }
          else
          {
              a=min(abs(arr[i]-arr[i+1]),abs(arr[i]-arr[i-1]));
              b=max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));
          }
          printf("%d %d\n",a,b);
      }
      return 0;
  }
