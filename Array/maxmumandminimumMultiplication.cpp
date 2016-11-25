#include <iostream>
#include <vector>
#include <climits>
using namespace std;
//http://www.geeksforgeeks.org/maximum-and-minimum-product-subsets-with-one-product-covering-all-elements/
void maxmumSubArray(vector<int>&v){
	if(v.size()==1){
		cout<<"max="<<v[0]<<" min="<<v[0]<<endl;
		return;
	}

	int negmax=INT_MIN,posmin=INT_MAX;
	int product=1;
	for(int i=0;i<v.size();i++){
		if(v[i]!=0){
			product*=v[i];
		}
		if(v[i]<0)
		{
			negmax=negmax<v[i]?v[i]:negmax;
		}
		else{
			posmin=posmin>v[i]?v[i]:posmin;
		}
	}
	int min,max;
	if(product>0){
		max=product;
		min=negmax==INT_MIN?posmin:product/negmax;
	}
	else{
		min=product;
		max=product/negmax;
	}

	cout<<"max="<<max<<"  min="<<min<<endl;
}

int main(){
	int arr[] ={-1};
	vector<int> v(arr,arr+sizeof(arr)/sizeof(arr[0]));
	maxmumSubArray(v);
	return 0;
}
