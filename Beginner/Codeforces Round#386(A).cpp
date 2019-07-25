#include <iostream> 
#include <vector> 
#include <string>
#include <cstring>
#include <bits/stdc++.h>
using namespace std; 
//https://codeforces.com/contest/746/problem/B
int main()
{
    int len;
    cin>>len;
    string str;
    cin>>str;
    vector<char> st;
    vector<char> st2;
    for(int i=0;i<len;i++)
    st.push_back(str[i]);
    int in;
    if(len%2==0)
    in=len/2-1;
    else
    in=len/2;
    int s=st.size();
    while(s>0)
    {
        st2.push_back(st[in]);
        st.erase(st.begin()+in);
        s--;
        if(s%2==0)
        in=s/2-1;
        else
        in=s/2;
        
    }
    for(int i=0;i<len;i++)
    cout<<st2[i];
   
    return 0;
}
