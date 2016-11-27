#include <iostream>
#include <vector>
#include <limits.h>
#include <math.h>
using namespace std;
//http://www.geeksforgeeks.org/find-maximum-value-of-absi-j-minarri-arrj-in-an-array-arr/
int min(int a,int b){
	return a<b?a:b;
}
int maxmizeProdct(vector<int> &arr){
	int max=INT_MIN;
	int n=arr.size();
	int lindex=0,hindex=n-1;
	while(lindex<hindex){
		int newmax=abs(lindex-hindex)*min(arr[lindex],arr[hindex]);
		//cout<<"max="<<max<<" lindex="<<lindex<<" hindex="<<hindex<<endl;
		if(max<newmax){
			max=newmax;

		}

		if(arr[lindex]<arr[hindex]){
			lindex++;
		}
		else{
			hindex--;
		}
	}
	return max;
}

int main(){
	int arr[]={8, 1, 9, 4};
	vector<int> v(arr,arr+sizeof(arr)/sizeof(arr[0]));
	cout<<"maximum product of array="<<maxmizeProdct(v)<<endl;
	return 1;
}
