#include <iostream>
#include <bits/stdc++.h>
#define pb push_back
using namespace std;
//https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/nearest-smaller-element-929558b4/description/
int main() 
{
	// *****STACK IMPLEMENTATION
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	stack<int> s;
	vector <int> vec;
	for(int i=0;i<n;i++)
	{
	   if(s.empty())
	   {
	       s.push(arr[i]);
	       vec.pb(-1);
	       continue;
	   }
	   while(!s.empty()&&s.top()>=arr[i])
	   s.pop();
	   if(s.empty())
	   vec.pb(-1);
	   else
	   vec.pb(s.top());
	   s.push(arr[i]);
	}
	int sz=vec.size();
	for(int i=0;i<sz;i++)
	cout<<vec[i]<<endl;

       // BRUTE FORCE****
    vector<int> vect; 
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=i-1;j>=0;j--)
        {
            if(flag==0)
            {
              if(arr[j]<arr[i])
              {
                vect.pb(arr[j]);
                flag=1;
              }  
            }
           else
           break;
           if(j==0&&flag==0)
           vect.pb(-1);
        }
    }
    int sz=vect.size();
	for(int i=0;i<sz;i++)
	cout<<vect[i]<<endl;
	return 0;
	
}
