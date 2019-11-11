#include<bits/stdc++.h>
using namespace std;

void reverse(string str){
    for(int i=str.size()-1;i>=0;i--){
        cout<<str[i];
    }
    cout<<" ";
}
int main()
{
    string str,word="";
    getline(cin,str);
    int ln = str.size();
    for(int i=0;i<=ln;i++){
            if(str[i]!=' ' && str[i]!='\0'){
                word=word+str[i];
            }
            else if(word.size()>0){
                word=word+"\0";
                reverse(word);
                word="";
            }

    }

    return 0;
}
