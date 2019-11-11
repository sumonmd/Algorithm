#include<bits/stdc++.h>
using namespace std;

int DeciToBinary(int n)
{
    int sum = 0,i=1;
    while(n!=0){
       int  rem = n%2;
       sum = i*rem+sum;
       n/=2;
       i*=10;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;

    cout<<DeciToBinary(n)<<endl;
    return 0;
}
