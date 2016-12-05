#include <iostream>
#include <vector>
#include <string>
using namespace std;
//http://www.geeksforgeeks.org/longest-palindrome-substring-set-1/
int startpos=-1,endpos=-1;
int maxpalindromesubstring(string str,int n){
	bool arr[n][n];
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			arr[i][j]=0;
		}
	}
	int max=0;
    //cout<<str<<"  ";
	for(int i=0;i<n-1;++i){
		if(i==0){
			arr[0][0]=1;
		}
		arr[i+1][i+1]=1;
		if(str[i]==str[i+1])
		{
			max=2;
			arr[i][i+1]=1;
			startpos=i;
			endpos=i+1;
		}
	}

	for(int i=2;i<n;++i){
		for(int j=0;j<n-i;++j){
			int k=i+j;
			if(str[j]==str[k]&&arr[j+1][k-1]==1){
				max=i+1;
				arr[j][k]=1;
				startpos=j;
				endpos=k;
			}
		}

	}
	return max;

}

void circularpalindrome(string str,int n){
	int prev;
	for(int i=0;i<n;++i){
        //cout<<str<<endl;
		if(startpos!=0&&endpos!=n-1){
			prev=maxpalindromesubstring(str,n);
			cout<<prev<<endl;
		}
		else{
			cout<<prev<<endl;
		}

		char temp=str[0];
		for(int j=0;j<n;++j){
			str[j]=str[j+1];
			startpos--;
			endpos++;
		}
		str[n-1]=temp;
	}
}

int main(){
	string str="eededdeedede";
	int n=str.length();
	//cout<<maxpalindromesubstring("deeededdeede",n)<<endl;
	circularpalindrome(str,str.length());
}
