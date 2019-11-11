#include<bits/stdc++.h>
using namespace std;

string CurrentPalindrome(string str,int low,int high)
{
    int ln = str.size()-1;
    while(low>=0 && high<=ln && str[low]==str[high]){
        low--;
        high++;
    }
    return str.substr(low+1,high-low-1);

}

string DivideSub(string str)
{
    int ln = str.size();
    string cur_str,max_str = "";
    int cur_len,max_len = 0;

    for(int i=0;i<ln;i++){
        cur_str = CurrentPalindrome(str,i,i);

        cur_len = cur_str.size();
        if(cur_len>max_len){
            max_len = cur_len;
            max_str = cur_str;
        }

        cur_str = CurrentPalindrome(str,i,i+1);

        cur_len = cur_str.size();
        if(cur_len>max_len){
            max_len = cur_len;
            max_str = cur_str;
        }
    }
    return max_str;
}
int main()
{
    string str;
    getline(cin,str);
    string long_sub = DivideSub(str);
    cout<<long_sub<<endl;
    return 0;
}
