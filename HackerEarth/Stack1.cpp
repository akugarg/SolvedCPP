#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/super-reduced-strings-303701dd/
int main() {
	// your code goes here
	string s;
	cin>>s;
	stack<char> g;
	stack<char> f;
	char ch;
	int n=s.length();
	for(int i=0;i<n;i++)
	{
	   if(g.empty())
	   {
	       g.push(s[i]);
	       continue;
	   }
	   ch=g.top();
	   if(s[i]==ch)
	   g.pop();
	   else
	   g.push(s[i]);
	}
	while(!g.empty())
	{
	    ch=g.top();
	    f.push(ch);
	    g.pop();
	}
	while(!f.empty())
	{
	    ch=f.top();
	    cout<<ch;
	    f.pop();
	}
	return 0;
}
