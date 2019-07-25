#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
  {
      int t;
      int a;
      double n;
      int x,y;
      scanf("%d\n",&t);
      while(t--)
      {
          scanf("%d\n",&a);
          n=360/(double)(180-a);
          x=(int)ceil(n);
          y=(int)floor(n);
          if(x==(int)n&&y==(int)n)
          printf("YES\n");
          else
          printf("NO\n");
      }
     
      return 0;
  }