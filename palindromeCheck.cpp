#include<bits/stdc++.h>
using namespace std;

string isPalindrome(string str,int low,int high)
{
    int ln = str.size();
    while(low>=0 && high<=ln && str[low]==str[high]){
        low--;
        high++;
    }
    return str.substr(low+1,high-low-1);
}
string getPalindrome(string str)
{
    int ln = str.size();
    int curr_len,max_len=0;
    string curr_str,max_str="";
    for(int i=0;i<ln;i++)
    {
        curr_str = isPalindrome(str,i,i);
        curr_len = curr_str.size();
        if(curr_len>max_len){
            max_str=curr_str;
            max_len = curr_len;
        }
        curr_str = isPalindrome(str,i,i+1);
        curr_len = curr_str.size();
        if(curr_len>max_len){
            max_str=curr_str;
            max_len = curr_len;
        }
    }
    return max_str;
}
int main()
{
    string str;
    getline(cin,str);
    string palindrome = getPalindrome(str);
    cout<<palindrome<<endl;

    return 0;
}
