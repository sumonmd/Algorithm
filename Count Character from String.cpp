#include<bits/stdc++.h>
using namespace std;

int main()
{
    int character[26];
    char str[100];
    for(int i=0;i<26;i++){
        character[i]=0;
    }
    gets(str);
    for(int i=0;i<strlen(str);i++){
        character[str[i]-'a']++;
    }

    for(int i=0;i<26;i++){
        if(character[i]!=0){
            cout<<(char)(i+'a')<<" = "<<character[i]<<endl;
        }
    }

    return 0;
}
