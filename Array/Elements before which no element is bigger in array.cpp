#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int printsmaller(vector<int>&arr){
	int max=INT_MIN,count=0;
	for(int i=0;i<arr.size();++i){
		if(max<arr[i]){
			max=arr[i];
			count++;
		}
	}
	return count;
}


int main(){

	int arr[]={10, 40, 23, 35, 50, 7};
	vector<int> v(arr,arr+sizeof(arr)/sizeof(arr[0]));
	cout<<printsmaller(v)<<endl;
	return 0;
}
