#include<bits/stdc++.h>
using namespace std;

void increase_decrease(int n)
{

    cout<<n<<" ";
    if(n<10){
        increase_decrease(n+1);
        cout<<n<<" ";
    }
}
int main()
{
    increase_decrease(1);
    return 0;
}
