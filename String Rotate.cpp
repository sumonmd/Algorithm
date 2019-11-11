#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str,int left,int right)
{
    return (left>=right || str[left]==str[right] && isPalindrome(str,left+1,right-1));
}
bool isRotatePalindrome(string str)
{
    int ln = str.size();
    for(int i=0;i<ln;i++){
        rotate(str.begin(),str.begin()+1,str.end());
        cout<<str<<" ";
        if(isPalindrome(str,0,ln-1)){
            return true;
        }
    }
}
int main()
{
    string str;
    getline(cin,str);
    rotate(str.begin(),str.begin()+2,str.end());
    cout<<str<<endl;
    if(isRotatePalindrome(str)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}
