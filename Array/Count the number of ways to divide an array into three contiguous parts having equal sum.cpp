
#include <iostream>
#include <vector>
using namespace std;

int countseparation(vector<int> &v,int n){
    int index1,index2,sum=0;


    for(int i=0;i<v.size();++i){
        sum+=v[i];
    }

    if(sum%3!=0)
        return 0;

    sum=sum/3;
   // cout<<"sum"<<sum<<endl;
    int temp=0;
    for(int i=0;i<v.size();++i){
        temp+=v[i];

        if(temp==sum){
            index1=i;
            break;
        }
    }
     if(index1==v.size())
     return 0;
    temp=0;
    for(int i=index1+1;i<v.size();++i){
        temp+=v[i];
         if(temp==sum){
            index2=i;
            break;
        }
    }

    if(index2==v.size())
     return 0;

   // cout<<index1<<"  "<<index2<<endl;
    int count1=1,count2=1;
    while(index1<index2 && v[index1+1]==0){
        count1++;
        index1++;
    }

    index2++;
    while(index2<v.size()-1 && v[index2]==0)
    {
        count2++;
        index2++;
    }

   return count2*count1;

}



int main() {
	//code
	//cout<<"enter number of element=";
	int num;
	cin>>num;

	vector<int> v;
	for(int i=0;i<num;i++){
	    int temp;
	    cin>>temp;
	    v.push_back(temp);
	}

    cout<<countseparation(v,num)<<endl;
	return 0;
}
