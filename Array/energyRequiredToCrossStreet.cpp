#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int minEnergyReqCrossStreet(vector<int> &arr){
	int energy=0,level=1;
	int n=arr.size();
	for(int i=0;i<n;++i){
		energy+=arr[i];
		if(energy<=0){
			level+=abs(energy)+1;
			energy=1;
		}
	}
	return level;
}

int main(){
	int arr[]={4, -10, 4, 4, 4};
	vector<int> v(arr,arr+sizeof(arr)/sizeof(a[0]));
	cout<<"minimum energy level required="<<minEnergyReqCrossStreet(v)<<endl;
	return 1;
}