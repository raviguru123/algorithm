#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
//http://www.geeksforgeeks.org/third-largest-element-array-distinct-elements/
int thirdLargest(vector<int> &arr){

	int first=INT_MIN+2,second=INT_MIN+1,third=INT_MIN,n=arr.size();
	if(n<3)
		return INT_MIN;

	for(int i=0;i<n;++i){
		if(arr[i]>first){
			third=second;
			second=first;
			first=arr[i];
		}
		else if(arr[i]>third){
			if(second>arr[i]){
				third=arr[i];
			}
			else {
				third=second;
				second=arr[i];
			}
		}

	}
	return third;
}

int main(){
	int arr[]={1, 14, 2, 16, 10, 20} ;
	vector<int> v(arr,arr+sizeof(arr)/sizeof(arr[0]));
	cout<<"third largest element="<<thirdLargest(v)<<endl;
}
