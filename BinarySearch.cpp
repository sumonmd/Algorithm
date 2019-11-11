#include<bits/stdc++.h>
using namespace std;

int Binary_Search(int arr[],int item,int n)
{
    int left = 0;
    int ck=0;
    int right = n;
    int mid;
    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid]==item){
            ck=1;
            break;
        }
        else if(arr[mid]<item){
            left=mid+1;
        }
        else if(arr[mid]>item){
            right=mid-1;
        }
    }
    return ck;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(Binary_Search(arr,10,n)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }


    return 0;
}
