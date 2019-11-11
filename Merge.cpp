#include<bits/stdc++.h>
using namespace std;
void Merge_Sort(int *arr,int l,int r)
{
    if(l<r){
        int m=l+(r-l)/2;
        Merge_Sort(arr,l,m);
        Merge_Sort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

void merge(int *arr,int l,int m,int r)
{
    int i,j,k;
    int n1 = m-l+1;
    int n2 = r-m;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++){
        L[i]=arr[l+1];
    }
    for(int j=0;j<n2;j++){
        R[j]=arr[m+1+j];
    }
    i=0;j=0;k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Merge_Sort(arr,0,n-1);
    /*cout<<"Using Sort Function"<<endl;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }*/
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

