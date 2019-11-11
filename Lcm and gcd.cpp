#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b)
{
    if(a<b)
        swap(a,b);
    while(b!=0){
        int temp = b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main()
{
    int a,b;
    cin>>a>>b;

    int gcd = GCD(a,b);
    cout<<"GCD is : "<<gcd<<endl;
    cout<<"LCM is : "<<(a*b)/gcd<<endl;

    return 0;
}
