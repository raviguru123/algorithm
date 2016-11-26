#include <iostream>
#include <vector>
using namespace std;
//http://www.geeksforgeeks.org/sorted-subsequence-size-3-linear-time-using-constant-space/
void increasingSubsequence(vector<int> &arr)
{
	int min1,min2,second,count=1;
	min1=arr[0];
	for(int i=1; i<arr.size(); ++i)
	{
		if(count==3)
		{
			if(arr[i]>second)
			{
				cout<<min1<<"  "<<second<<" "<<arr[i];
			}
			else
			{
				if(min2>arr[i])
				{
					min2=arr[i];
				}
				else
				{
					if(min2<arr[i]<min1)
					{
						min1=min2;
						second=arr[i];
						count--;
					}
					else
					{
						second=arr[i];
					}
				}
			}
		}
		else
		{
			if(count==1)
			{
				if(min1>arr[i])
					min1=arr[i];
				else
				{
					second=arr[i];
					count++;
				}
			}
            else // {12, 11, 10, 5, 10, 2, 30};
            {

            	if(arr[i]>second)
            	{

            		cout<<min1<<"  "<<second<<" "<<arr[i];
            	}
            	else
            	{

            		if(min1<arr[i]&&arr[i]<second)
            		{
            			second=arr[i];
            		}
            		else
            		{
            			min2=arr[i];
            			count++;
            		}
            	}
            }
        }

    }
}

int main()
{
	int arr[]=  {12, 11, 10, 5, 2, 6, 30} ;
	vector<int> v(arr,arr+sizeof(arr)/sizeof(arr[0]));
	increasingSubsequence(v);
	return 0;
}
