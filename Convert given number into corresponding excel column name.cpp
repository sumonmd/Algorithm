#include<bits/stdc++.h>
using namespace std;

string getColumn(int n)
{
    string col="";
    while(n>0){
        int x = (n-1)%26;
        col = (char)(x+'A')+col;
        n=(n-1)/26;
    }
    return col;
}

int main()
{
    int n;
    cin>>n;

    cout<<getColumn(n)<<endl;

    return 0;
}
