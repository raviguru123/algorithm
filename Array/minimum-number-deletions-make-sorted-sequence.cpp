#include <iostream>
#include <vector>
using namespace std;

int minimum_deletion(vector<int> &v,int n)
{
    vector<int> temp;
    int global_max=0;
    temp.push_back(1);
    for(int i=1; i<n; i++)
    {
        temp.push_back(1);
        int max=0;
        for(int j=i-1; j>=0; j--)
        {
            if(v[i]>=v[j]&&max<temp[j])
            {
                max=temp[j];
            }
        }
        temp[i]+=max;
       // cout<<temp[i-1]<<"  ";
        if(global_max<temp[i])
        {
            global_max=temp[i];
        }
    }

    return v.size()-global_max;

}


int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    cout<<minimum_deletion(v,n)<<endl;

    return 0;
}
