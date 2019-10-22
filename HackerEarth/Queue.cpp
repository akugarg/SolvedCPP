#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//https://www.hackerearth.com/practice/data-structures/queues/basics-of-queues/practice-problems/algorithm/disk-tower-b7cc7a50/description/
int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	priority_queue<int> q,pq;
	for(int i=0;i<n;i++)
	pq.push(arr[i]);
	for(int i=0;i<n;i++)
	{
	    q.push(arr[i]);
	    while(!q.empty()&&q.top()>=pq.top())
	    {
	        cout<<q.top()<<" ";
	        q.pop();
	        pq.pop();
	    } 
	    cout<<"\n";
	}
	return 0;
}

