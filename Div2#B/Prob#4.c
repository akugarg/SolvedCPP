
 #include<stdio.h>
#include<math.h>
 //http://codeforces.com/contest/16/problem/B
int main()
  {
    int n,m;
    scanf("%d %d\n",&n,&m);
    int a[m],b[m];
    for(int i=0;i<m;i++)
    scanf("%d %d\n",&a[i],&b[i]);
    int temp,temp2;
    int c=0;
    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(b[j]>b[i])
            {
                temp=b[j];
                b[j]=b[i];
                b[i]=temp;
                temp2=a[j];
                a[j]=a[i];
                a[i]=temp2;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        if(a[i]<=n){
          n-=a[i];
          c+=a[i]*b[i];
        }
        else if(a[i]>n)
        {
            c+=n*b[i];
            n=0;
        }
        else if(n==0)
        break;
    }
    printf("%d",c);
   return 0;
  }