
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//http://www.geeksforgeeks.org/maximum-sum-pairs-specific-difference/
int findMaximumSumPair(vector<int>&v,int k){
	sort(v.begin(),v.end());
	int sum=0;
	for(int i=v.size()-1;i>0;--i){
		if(v[i]-v[i-1]<k){
			sum+=v[i]+v[i-1];
			i--;
		}
	}
	return sum;
}


int main(){
	int arr[7]={3,5,10,15,17,12,9};
	vector<int> v(arr,arr+sizeof(arr)/sizeof(arr[0]));
	cout<<"maximum sum ="<<findMaximumSumPair(v,4)<<endl;
}
