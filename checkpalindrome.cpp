#include<bits/stdc++.h>
using namespace std;

int palindrome(string str,int l,int r)
{
    return(l>=r || str[l]==str[r] && palindrome(str,l+1,r-1));
}

int main()
{
    string str;
    cin>>str;
    if(palindrome(str,0,str.size()-1)){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }

    return 0;
}
