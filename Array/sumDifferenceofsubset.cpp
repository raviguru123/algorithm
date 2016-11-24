#include<iostream>
#include<vector>
using namespace std;
//http://www.geeksforgeeks.org/sum-subset-differences/

int sumDiffSubset(vector<int>&arr){//brute force implementation
	int n=arr.size(),sum=0;
	for(int i=1;i<n-1;++i){
		for(int j=0;j<n-i;++j){
			for(int k=i+j;k<n;++k){
				sum+=arr[k]-arr[j];
				//cout<<arr[k]-arr[j]<<" ";
				cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
			}

		}
		cout<<endl;
	}
	return sum;
}

int main(){
	int arr[]={5,2,9,6};
	vector<int> v(arr,arr+sizeof(arr)/sizeof(arr[0]));
	cout<<"total sum diff="<<sumDiffSubset(v)<<endl;
}