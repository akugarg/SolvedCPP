#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
  {
   char str[]={'R','O','Y','G','B','I','V'};
   int n;int a=0;
   scanf("%d\n",&n);
   char str1[n];
   int b=n-3;
   while(b>0)
   {
       if(b>=4)
       {
        for(int i=0;i<4;i++)
        {
           str1[a++]=str[i];
           
        }
           b-=4;
       }
       else if(b<4)
       {
           for(int i=0;i<b;i++)
           str1[a++]=str[i];
           b=0;
       }
   }
   for(int i=4;i<7;i++)
   str1[a++]=str[i];
   
   for(int i=0;i<a;i++)
   printf("%c",str1[i]);
   return 0;
  }
