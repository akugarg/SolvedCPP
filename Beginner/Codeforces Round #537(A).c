#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
  {
      char str[1001];
      char str2[1001];
      gets(str);
      gets(str2);
      int l1=strlen(str);
      int l2=strlen(str2);
      int flag=1;
      if(l1!=l2)
      printf("No");
      else
      {
          for(int i=0;i<l1;i++)
          {
              char ch1=str[i];
              char ch2=str2[i];
              if(ch1=='a'||ch1=='e'||ch1=='i'||ch1=='o'||ch1=='u')
              {
                  if(ch2=='a'||ch2=='e'||ch2=='i'||ch2=='o'||ch2=='u')
                  continue;
                  else{
                      flag=0; break;
                  } 
                  
                 
              }
              else
              {
                  if(ch2!='a'&&ch2!='e'&&ch2!='i'&&ch2!='o'&&ch2!='u')
                  continue;
                  else{
                      flag=0; break;
                  } 
              }
          }
           if(flag)
           printf("Yes\n");
           else
           printf("No");
      }
     
      return 0;
  }