#include<stdio.h>
#include<math.h>
#include<string.h>
//https://codeforces.com/contest/228/problem/A
int main()
{
    int arr[4];
    for(int i=0;i<4;i++)
    scanf("%d",&arr[i]);
    int temp;
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }int d=1;
    for(int i=0;i<3;i++)
    {
        if(arr[i]==arr[i+1])
        continue;
        else
        d++;
    }
    printf("%d",4-d);
    return 0;
}
