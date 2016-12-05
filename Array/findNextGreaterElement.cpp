#include <iostream>
#include <vector>
#include <stack>
#include <limits.h>
using namespace std;
//http://www.geeksforgeeks.org/next-greater-element/
void nextgreaterElement(vector<int> &arr){
	stack<int> s;
	s.push(arr[0]);
	int n=arr.size();
	for(int i=1;i<n;++i){
		while(!s.empty()&&arr[i]>s.top()){
			cout<<s.top()<<"  "<<arr[i]<<endl;
			s.pop();
		}
		s.push(arr[i]);
	}
	while(!s.empty()){
		cout<<s.top()<<"  "<<"-1"<<endl;
		s.pop();
	}
}

int main(){
	int arr[]={13, 7, 6, 12};
	vector<int> v(arr,arr+sizeof(arr)/sizeof(arr[0]));
	nextgreaterElement(v);
	return 0;
}
