#include <iostream>
#include <stdlib.h>
#include <vector>
#include <limits.h>
using namespace std;

int min(int a,int b){
	return a<b?a:b;
}

void print(vector< vector<int> > &arr,int n,int m){

	for(int i=0;i<n;i++){
		for(int j=0;j<m;++j){
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}


	cout<<endl;
	cout<<endl;
	cout<<endl;
}

void fillChessCrossword(vector< vector<int> > &arr,int n,int m,int x,int y){

	if(x<0||y<0||x>=n||y>=m)
		return;

	if(x+2<n&&y+1<m){
		if(arr[x+2][y+1]>arr[x][y]+1){
			arr[x+2][y+1]=arr[x][y]+1;
			fillChessCrossword(arr,n,m,x+2,y+1);
		}
	}
	if(x+2<n&&y-1>-1){
		if(arr[x+2][y-1]>arr[x][y]+1){
			arr[x+2][y-1]=arr[x][y]+1;
			fillChessCrossword(arr,n,m,x+2,y-1);
		}
	}
	if(x-2>-1&&y+1<m){
		if(arr[x-2][y+1]>arr[x][y]+1){
			arr[x-2][y+1]=arr[x][y]+1;
			fillChessCrossword(arr,n,m,x-2,y+1);
		}
	}
	if(x-2>-1&&y-1>-1){
		if(arr[x-2][y-1]>arr[x][y]+1){
			arr[x-2][y-1]=arr[x][y]+1;
			fillChessCrossword(arr,n,m,x-2,y-1);
		}
	}
	if(x+1<n&&y+2<m){
		if(arr[x+1][y+2]>arr[x][y]+1){
			arr[x+1][y+2]=arr[x][y]+1;
			fillChessCrossword(arr,n,m,x+1,y+2);
		}
	}
	if(x-1>-1&&y+2<m){
		if(arr[x-1][y+2]>arr[x][y]+1){
			arr[x-1][y+2]=arr[x][y]+1;
			fillChessCrossword(arr,n,m,x-1,y+2);
		}
	}
	if(x+1<n&&y-2>-1){
		if(arr[x+1][y-2]>arr[x][y]+1){
			arr[x+1][y-2]=arr[x][y]+1;
			fillChessCrossword(arr,n,m,x+1,y-2);
		}
	}
	if(x-1>-1&&y-2>-1){
		if(arr[x-1][y-2]>arr[x][y]+1){
			arr[x-1][y-2]=arr[x][y]+1;
			fillChessCrossword(arr,n,m,x-1,y-2);
		}
	}
	//print(arr,n,m);

}



int main(){
	int n,m,x1,y1,x2,y2;
	cin>>n;
	cin>>m;
	cin>>x1;
	cin>>y1;
	cin>>x2;
	cin>>y2;

	vector< vector<int> > arr;
	for(int i=0;i<n;++i){
		vector<int> temp(m,INT_MAX);
		arr.push_back(temp);
	}
	arr[x1][y1]=0;
	fillChessCrossword(arr,n,m,x1,y1);
	print(arr,n,m);

	cout<<"minimum number of step are required to reach at particular location="<<arr[x2][y2]<<endl;
}
