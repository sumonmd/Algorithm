#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b)
{
    while(b!=0){
        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    int gcd;
    if(a<b){
        swap(a,b);
        gcd = GCD(a,b);
    }else
    {
        gcd = GCD(a,b);
    }
    cout<<gcd<<endl;

    return 0;
}
