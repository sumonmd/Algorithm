#include<bits/stdc++.h>
using namespace std;

int Binary_Search(int arr[],int right,int item)
{
    int l=0;
    int r = right-1;
    int ck=0;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid]==item){
            ck=1;
            break;
        }
        else if(arr[mid]>item){
            r = mid-1;
        }
        else if(arr[mid]<item){
                l=mid+1;
        }
    }
    return ck;
}
int main()
{
    int n;
    cout<<"Number of Element "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Array List "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int item;
    cout<<"Enter the Item for Checking "<<endl;
    cin>>item;

    int ck = Binary_Search(arr,n,item);
    if(ck){
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;

    return 0;
}
