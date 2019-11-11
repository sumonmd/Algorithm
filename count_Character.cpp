#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    cout<<str<<endl;
    int cnt[26];
    for(int i=0;i<26;i++){
        cnt[i]=0;
    }
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            cnt[str[i]-'a']++;
        }
    }

    for(int i=0;i<26;i++){
        if(cnt[i]>=1){
            cout<<(char)(i+'a')<<" = "<<cnt[i]<<endl;
        }
    }

    return 0;
}
