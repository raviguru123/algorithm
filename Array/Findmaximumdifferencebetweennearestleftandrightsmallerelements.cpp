#include <iostream>
#include <vector>
#include <stack>
#include <limits.h>
using namespace std;
//http://www.geeksforgeeks.org/find-maximum-difference-between-nearest-left-and-right-smaller-elements/

int maxdiff(vector<int> &arr)
{
	int n=arr.size();
	vector<int> left(n,0);
	vector<int> right(n,0);
	stack<int> s;
	s.push(n-1);

	for(int i=n-2; i>=0; --i)
	{
		while(!s.empty()&&arr[s.top()]>arr[i])
		{
			left[s.top()]=arr[i];
			s.pop();
		}

		s.push(i);
	}

	while(!s.empty())
	{
		left[s.top()]=0;
		s.pop();
	}


	s.push(0);
	for(int i=1; i<n; i++)
	{
		while(!s.empty()&&arr[s.top()]>arr[i])
		{

			right[s.top()]=arr[i];
			s.pop();
		}

		s.push(i);
	}

	while(!s.empty())
	{
		right[s.top()]=0;
		s.pop();
	}

	int max=INT_MIN;

	for(int i=0; i<n; ++i)
	{
		if(abs(left[i]-right[i])>max){
			max=abs(left[i]-right[i]);
		}

	}

	return max;
}


int main()
{
	int arr[]={5, 1, 9, 2, 5, 1, 7};
	vector<int> v(arr,arr+sizeof(arr)/sizeof(arr[0]));
	cout<<maxdiff(v)<<endl;
	return 0;
}
