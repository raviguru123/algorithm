#include<iostream>
#include<vector>
#include<map>
using namespace std;
//http://www.geeksforgeeks.org/count-pairs-given-xor

int countPair(vector<int> &v,int k){
	int count=0;
	map<int,int> m;

	for(int i=0;i<v.size();++i)
	{
		m[v[i]]=1;
	}

	for(int i=0;i<v.size();++i){
		if(m[v[i]^k]==1){
		//cout<<v[i]<<"  "<<(v[i]^k)<<endl;
			count++;
		}

	}
	return count/2;
}

int main(){
	int arr[6]={5, 4, 10, 15, 7, 6};
	vector<int> v(arr,arr+sizeof(arr)/sizeof(arr[0]));
	cout<<"Total pair="<<countPair(v,5)<<endl;
}
