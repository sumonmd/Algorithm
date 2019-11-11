#include<bits/stdc++.h>
using namespace std;
int pascal[53][53];
void Pascal()
{
    pascal[0][0]=1;
    pascal[1][0]=1;
    pascal[1][1]=1;
    int j;
    for(int i=2;i<53;i++){
        pascal[i][0]=1;
        for(j=1;j<i;j++){
            pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
        }
        pascal[i][j]=1;
    }
}
int main()
{
    int n;
    cin>>n;
    Pascal();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<pascal[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
