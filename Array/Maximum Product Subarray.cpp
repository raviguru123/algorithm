#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
//http://www.geeksforgeeks.org/add-elements-given-arrays-given-constraints/
void accommodateArray(vector<int> &arr1,vector<int>&arr2)
{
	vector<int> arr3;
	int i=0,j=0;
	while(1)
	{
		int sum=0;
		sum+=i<arr1.size()?arr1[i]:0;
		sum+=j<arr2.size()?arr2[j]:0;
		i++;
		j++;
		string str="";
		while(sum!=0)
		{
			str+=(char)(sum%10+48);
			sum=sum/10;
		}
        //cout<<"str="<<str<<endl;
		int index=str.length()-1;
		while(index>=0)
		{
			arr3.push_back((int)str[index]-48);
			index--;
		}

		if(i<arr1.size()||j<arr2.size())
			continue;
		else break;

	}
	for(i=0; i<arr3.size(); ++i)
	{
		cout<<arr3[i]<<"  ";
	}
	cout<<endl;

}

int main()
{
	int arr1[]= {9343, 2, 3, 7, 9, 6};
	int arr2[]= {34, 11, 4, 7, 8, 7, 6, 99};
	vector<int> v1(arr1,arr1+sizeof(arr1)/sizeof(arr1[0]));
	vector<int> v2(arr2,arr2+sizeof(arr2)/sizeof(arr2[0]));
	accommodateArray(v1,v2);
}
