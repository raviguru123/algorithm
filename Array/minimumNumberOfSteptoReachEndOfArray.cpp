#include<iostream>
#include<vector>
using namespace std;
int min(int a,int b){
	return a<b?a:b;
}
void findMinimum(vector<int> &v){
	vector<int>temp;

	for(int i=0;i<v.size();++i){
		temp[i]=i;
	}

	for(int i=1;i<v.size();++i){
		temp[i]=min(temp[i],min(temp[i-1]+1,temp[i+1]+1));
		for(int j=0;j<v.size();++j){
			if(a[j]==a[i])
			{
				temp[j]=min(temp[i]+1,temp[j]);
			}
		}
	}

	for(int i=0;i<v.size();i++){
		cout<<temp[i]<<"  "<<;
	}


}
int main(){
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 5,4,3,6, 0, 1, 2, 3, 4, 5, 7};
	int N = sizeof(arr) / sizeof(int);
	vector<int> v(arr,arr+N);

}