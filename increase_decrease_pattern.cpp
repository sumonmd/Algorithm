#include<bits/stdc++.h>
using namespace std;

void Decrease_Increase(int n)
{
    for(int i=1;i<n;i++){
        int num = i;
        for(int j=1;j<=i;j++){
            cout<<num;
            num++;
        }
        num--;
        num--;
        for(int k=num;k>=i;k--){
            cout<<k;
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    Decrease_Increase(n);


    return 0;
}
