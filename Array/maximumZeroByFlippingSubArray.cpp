#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
//http://www.geeksforgeeks.org/maximize-number-0s-flipping-subarray/
int maximumZero(vector<int> &arr){
	int n=arr.size();
	int count=0,zeros=0;
	for(int i=0;i<n;++i){
		if(arr[i]==0){
			zeros++;
			count--;
		}
		else 
			count++;

		if(count>max){
			cout<<count<<endl;
			max=count;
		}
		if(count<0)
			count=0;
	}
	return count+zeros;
}

int main(){
	int arr[]={0, 1, 0, 0, 1, 1, 0};
	vector<int> v(arr,arr+sizeof(arr)/sizeof(arr[0]));
	cout<<"maxmim zero flipping SubArray="<<maximumZero(v)<<endl;
}