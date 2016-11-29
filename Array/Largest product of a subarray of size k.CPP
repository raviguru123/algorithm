#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
//http://www.geeksforgeeks.org/largest-product-subarray-size-k/
int findMaxProduct(vector<int> &arr,int k){
	int max=1,temp=1;
	int n=arr.size();
	for(int i=0;i<n;++i){
		if(i<k){
			max*=arr[i];
			temp=max;
		}
		else{
			temp=(temp/arr[i-k])*arr[i];
			if(temp>max){
				max=temp;
			}
		}
	}

	return max;
}

int main(){
	int arr[]={1, 5, 9, 8, 2, 4, 1, 8, 1, 2};
	vector<int> v(arr,arr+sizeof(arr)/sizeof(arr[0]));
	cout<<"Max product array="<<findMaxProduct(v,4)<<endl;
	return 0;
}
