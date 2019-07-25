#include<string.h>
//https://codeforces.com/contest/344/problem/A
//Author :Akanksha Garg
int main()
{
    int n;
    scanf("%d\n",&n);
    int prev,curr;
    int m=0,g=0;
    scanf("%d\n",&prev);
    for(int i=1;i<n;i++)
    {
        scanf("%d\n",&curr);
        if(prev==curr)
        {
            prev=curr;
            continue;
        }
        else
        {
            g++;
            prev=curr;
        }
    }
    printf("%d",++g);
    return 0;
}
#include<string.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    int prev,curr;
    int m=0,g=0;
    scanf("%d\n",&prev);
    for(int i=1;i<n;i++)
    {
        scanf("%d\n",&curr);
        if(prev==curr)
        {
            prev=curr;
            continue;
        }
        else
        {
            g++;
            prev=curr;
        }
    }
    printf("%d",++g);
    return 0;
}
