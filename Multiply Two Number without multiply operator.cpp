#include<bits/stdc++.h>
using namespace std;

int Multiply(int a,int b)
{
    if(a==0||b==0)
        return 0;
    if(a==1)
        return b;
    if(b==1)
        return a;
    return a+Multiply(a,b-1);
}

int main()
{
    int a,b;
    cout<<Multiply(3,4)<<" and "<<Multiply(23,4)<<endl;
    return 0;
}
