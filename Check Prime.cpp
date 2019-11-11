#include<bits/stdc++.h>
using namespace std;

int arr[10010];
int length = 10010;
void seive()
{
  for(int i=2;i<length;i++){
    arr[i]=1;
  }
 int   root = sqrt(length);
  for(int i=2;i<root;i++){
    for(int j=2;j*i<length;j++){
        if(arr[j]==1){
            arr[j*i]=0;
        }
    }
  }
}

int main()
{
    int n;
    cin>>n;
    seive();
    for(int i=0;i<n/2;i++){
        if(arr[i]==1 && n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;


    return 0;
}
