#include<bits/stdc++.h>
using namespace std;
void getMax(int arr[],int n,int k)
{
    int max_ln = INT_MIN;
    int i,j,startIndex=0;
    for(i=0;i<n;i++){
        int sum = arr[i];
        if(sum==k)
            break;
        for(int j=i+1;j<n;j++){
            sum+=arr[j];
            if((sum==k)&&(j-i+1)>max_ln){
                cout<<sum<<endl;
                max_ln = j-i+1;
                startIndex=i;
                //cout<<"startIndex = "<<startIndex<<endl;
            }

        }
    }
    cout<<startIndex<<endl;
    cout<<"["<<startIndex<<" , "<<(max_ln+startIndex-1)<<"]"<<endl;
}
int main()
{

    int arr[]={5,6,-5,5,3,5,3,-2,0};
    int sum = 8;
    int ln = sizeof(arr)/sizeof(arr[0]);
    getMax(arr,ln,sum);
   // cout<<max_len<<endl;

    return 0;
}
