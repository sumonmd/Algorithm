#include<bits/stdc++.h>
using namespace std;
int getMin(int arr[],int n,int k)
{
    int min_len=n+1;
    for(int start=0;start<n;start++){
        int sum=arr[start];
        if(sum>k)
            return 1;
        for(int end=start+1;end<n;end++){
            sum+=arr[end];
            if(sum>k && (end-start+1)<min_len)
                min_len=(end-start+1);
        }
    }
    return min_len;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int k=21;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<getMin(arr,n,k)<<endl;
    return 0;
}
