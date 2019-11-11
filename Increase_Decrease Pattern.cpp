#include<bits/stdc++.h>
using namespace std;

void Inc_Dec(int n)
{
   for(int i=1;i<=n;i++){
        int k = i;
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        k--;
        k--;
        for(int j=k;j>1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
   }
}
int main()
{
    int n;
    cin>>n;
    Inc_Dec(n);

    return 0;
}
