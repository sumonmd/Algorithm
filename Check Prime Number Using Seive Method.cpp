#include<bits/stdc++.h>
#define siz 10010
using namespace std;

int arr[siz];
void seive()
{
    arr[siz]={0};
    int root = sqrt(siz);
    for(int i=2;i<root;i++){
        for(int j=2;i*j<siz;j++){
            arr[i*j]=1;
        }
    }

}
int main()
{
    int n;
    cin>>n;
    seive();
    if(arr[n]==0)
        cout<<"Prime"<<endl;
    else
        cout<<"Not Prime"<<endl;

    return 0;
}
