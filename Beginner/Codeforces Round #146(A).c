#include<stdio.h>
#include<math.h>
#include<string.h>
//Author :Akanksha Garg
//https://codeforces.com/contest/236/problem/A
int main()
{
    char ch;
    ch=getchar();
    int abc[26];
    for(int i=0;i<26;i++)
    abc[i]=0;
    int d;
    while(ch!=EOF)
    {
        d=ch-'a';
        abc[d]++;
        ch=getchar();
    }
    int c=0;
    for(int i=0;i<26;i++)
    {
        if(abc[i]!=0)
        c++;
    }
    if(c%2==0)
    printf("CHAT WITH HER!");
    else
    printf("IGNORE HIM!");
    return 0;
}