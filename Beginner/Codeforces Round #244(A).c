#include<stdio.h>
#include<math.h>
#include<string.h>
//https://codeforces.com/contest/427/problem/A
int main()
{
    int n;
    scanf("%d\n",&n);
    int cm=0,pl=0;
    int a;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a>0)
        {
            pl+=a;
        }
        else if(a==-1)
        {
            if(pl>0)
            {
                pl--;
            }
            else
            cm++;
        }
    }
    printf("%d",cm);
    return 0;
}