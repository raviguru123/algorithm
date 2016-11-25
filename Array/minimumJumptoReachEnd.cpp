#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
//http://www.geeksforgeeks.org/minimum-number-of-jumps-to-reach-end-of-a-given-array/
int min(int a,int b){
	return a<b?a:b;
}


int minumumStepReachEnd(vector<int> &arr){
	int size=arr.size();
	vector<int> path(size,INT_MAX);
	path[0]=0;
	for(int i=0;i<size-1;++i){
		int num=arr[i];
		int j=i+1;
		while(num>0&&j<size){
			path[j]=min(path[j],path[i]+1);
			num--;
			j++;
		}
	}
	return path[size-1];
}

int main(){
	int arr[]={1, 3, 2, 0, 3, 0, 0, 2, 1, 1, 9};
	vector<int> v(arr,arr+sizeof(arr)/sizeof(arr[0]));
	cout<<minumumStepReachEnd(v)<<endl;
	return 0;
}
