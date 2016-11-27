#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
//http://www.geeksforgeeks.org/minimum-steps-reach-end-array-constraints/
void minStep(vector<int> &arr,vector<int> &path,int index){

	for(int i=index;i<arr.size();++i){
		if(i>0){
			if(path[i]+1<path[i-1]){
				path[i-1]=path[i]+1;
				minStep(arr,path,i-1);
			}
		}
		if(i<arr.size()-1){
			if(path[i]+1<path[i+1]){
				path[i+1]=path[i]+1;
			}
		}
		int j=0;
		while(j<arr.size()){
			if(arr[j]==arr[i]&&path[i]+1<path[j]){
				path[j]=path[i]+1;
				minStep(arr,path,j);
			}
			j++;
		}
	}
}

int main(){
	int arr[]={0, 1, 2, 3, 4, 5, 6, 7, 5, 4,3, 6, 0, 1, 2, 3, 4, 5, 7};
	vector<int> v(arr,arr+sizeof(arr)/sizeof(arr[0]));
	vector<int>path (sizeof(arr)/sizeof(arr[0]),INT_MAX);
	path[0]=0;
	minStep(v,path,0);
	cout<<"minstep Required to reach End of Array = "<<path[path.size()-1]<<endl;
	return 0;
}
