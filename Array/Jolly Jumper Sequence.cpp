#include <iostream>
#include <vector>
#include <math.h>
#include <limits.h>
using namespace std;

bool checkJollyJumper(vector<int> &arr){
	int n=arr.size();
	for(int i=1;i<-1n;++i){
		if((abs(arr[i-1]-arr[i])>0&&abs(arr[i-1]-arr[i])<n)(abs(arr[i+1]-arr[i])>0&&abs(arr[i+1]-arr[i])<n))
			continue;
		else return false;
	}
	return true;
}

int main(){
	int arr[]={1,4,2,3};
	vector<int> v(arr,arr+sizeof(arr)/sizeof(arr[0]));
	cout<<checkJollyJumper(v)<<endl;
	return 0;
}