#include<bits/stdc++.h>
using namespace std;

int DecimalToBinary(int n)
{
    int x = 1,sum =0;
    while(n!=0){
        int rm = n%2;
        sum=rm*x+sum;
        x*=10;
        n/=2;
    }
    return sum;
}


int main()
{
    int n;
    cin>>n;
    int binary = DecimalToBinary(n);
    cout<<"Binary Value is : "<<binary<<endl;

    return 0;
}
