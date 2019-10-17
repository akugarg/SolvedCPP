#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n;
	int ans;
	while(t--)
	{
	  ans=1;
	  cin>>n;
	  int arr[n];
	  for(int i=0;i<n;i++)
	  cin>>arr[i];
	  for(int i=1;i<n;i++)
	  {
	      
	      int s=0;
	      int flg=1;
	      for(int j=i-1;j>=0;j--)
	      {
	          if(s!=5)
	          {
	           //   cout<<arr[j]<<arr[i]<<endl;
	              if(arr[j]<=arr[i])
	              flg=0;
	          }
	          else
	          break;
	          s++;
	          
	      }
	      if(flg==1)
          {
	         ans++;
	      }
	      
	  }
	  cout<<ans<<"\n";

	}
	return 0;
}
