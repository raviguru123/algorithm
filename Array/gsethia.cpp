#include <iostream>
using namespace std;
int operation(int x,int y){
	int op=0;
	while(x<y){
		x=x<<1;
		op++;
	}
	while(x>y){
		x--;
		op++;
	}
	return op;
}


int main(){
	int x,y;
	cin>>x;
	cin>>y;
	cout<<"minimum operation"<<operation(x,y)<<endl;
}