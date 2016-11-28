#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
//http://www.geeksforgeeks.org/find-all-triplets-in-a-sorted-array-that-forms-geometric-progression/
void print(int first,int second,int third){
	if((third%second)==0&&(second%first)==0)
	{
		if(second/first==third/second){
			cout<<first<<"  "<<second<<"  "<<third<<endl;
		}
	}

}


void triplet(vector<int> &arr){//brute force implementation of finding triplet
	int n=arr.size();

	for(int i=0;i<n-2;++i){
		for(int j=i+1;j<n-1;++j){
			for(int k=j+1;k<n;++k){
				print(arr[i],arr[j],arr[k]);
			}
		}
	}
}


int main(){
	int arr[]={1, 2, 6, 18, 36, 54};
	vector<int> v(arr,arr+sizeof(arr)/sizeof(arr[0]));
	triplet(v);
	return 0;
}
