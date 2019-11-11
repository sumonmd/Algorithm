#include<bits/stdc++.h>
using namespace std;

int palindrome(string str,int first,int last)
{

    return (first>=last || str[first]==str[last] && palindrome(str,first+1,last-1));
}

int main()
{
    string str;
    cin>>str;
    int ln = str.size();
    if(palindrome(str,0,ln-1)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }


    return 0;
}
