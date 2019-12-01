#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/picu-bank-09e29493/editorial/
int main() {
	// your code goes here
	ll d,a,m,b,x;
	cin>>d>>a>>m>>b>>x;
	ll amt=x-d;
	int days=0;
	int s=amt/(a*m+b);
	days+=s*(m+1);
    int l=amt%(a*m+b);
    if(l<=a*m)
    {
        days+=ceil((double)l/a);
    }
    else
    days+=m+1;
	cout<<days;
	return 0;
}
