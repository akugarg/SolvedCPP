#include<stdio.h>
#include<math.h>
 
int main()
  {
    int n,a;
    scanf("%d %d\n",&n,&a);
    int arr[n];
    
    for(int i=0;i<n;i++)
    scanf("%d ",&arr[i]);
    int in=a-1;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(i!=0){
        if((in+i)<n&&(in-i)>=0)
        {
            if(arr[in+i]==1&&arr[in-i]==1)
            {
                c+=2;
            }
        }
       else if((in+i)<n&&(in-i)<0)
        {
            if(arr[in+i]==1)
            c++;
        }
        else if(in-i>=0&&in+i>=n)
        {
            if(arr[in-i]){
                c++;
            }
            
        }}
        else
        {
            if(arr[in]==1)
            c++;
        }
    }
    printf("%d",c);
   return 0;
  }
#include<stdio.h>
#include<math.h>
 
int main()
  {
    int n,a;
    scanf("%d %d\n",&n,&a);
    int arr[n];
    
    for(int i=0;i<n;i++)
    scanf("%d ",&arr[i]);
    int in=a-1;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(i!=0){
        if((in+i)<n&&(in-i)>=0)
        {
            if(arr[in+i]==1&&arr[in-i]==1)
            {
                c+=2;
            }
        }
       else if((in+i)<n&&(in-i)<0)
        {
            if(arr[in+i]==1)
            c++;
        }
        else if(in-i>=0&&in+i>=n)
        {
            if(arr[in-i]){
                c++;
            }
            
        }}
        else
        {
            if(arr[in]==1)
            c++;
        }
    }
    printf("%d",c);
   return 0;
  }
