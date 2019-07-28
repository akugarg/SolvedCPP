#include<stdio.h>
int main()
{
    int n,i,count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,b,k;
        scanf("%d %d %d",&a,&b,&k);
        int j,l;
        count=0;
        for(j=a-k;j<=a+k;j++)
        {
            for(l=b-k;l<=b+k;l++)
            {
                if((j>=1&&j<=8)&&(l>=1&&l<=8))
                    count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
