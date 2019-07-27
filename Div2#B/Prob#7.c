#include<stdio.h>
#include<math.h>
 //http://codeforces.com/contest/47/problem/B
int main()
  {
   char ch1,ch2,sgn;
   int a=0,b=0,c=0;
   for(int i=1;i<=3;i++)
   {
       scanf("%c",&ch1);
       scanf("%c",&sgn);
       scanf("%c",&ch2);
       //printf("%c %c %c",ch1,sgn,ch2);
       if(sgn=='>')
       {
           if(ch1=='A')
           a++;
           else if(ch1=='B')
           b++;
           else if(ch1=='C')
           c++;
       }
       else if(sgn=='<')
       {
           if(ch2=='A')
           a++;
           else if(ch2=='B')
           b++;
           else if(ch2=='C')
           c++;
       }
       scanf("\n");
   }
   if(a!=b&&a!=c&&b!=c)
   {
       if(a==0)
       printf("A");
       else if(b==0)
       printf("B");
       else if(c==0)
       printf("C");
       
       if(a==1)
       printf("A");
       else if(b==1)
       printf("B");
       else if(c==1)
       printf("C");
       
       if(a==2)
       printf("A");
       else if(b==2)
       printf("B");
       else if(c==2)
       printf("C");
   }
   else
   printf("Impossible");
   
   return 0;
  }
