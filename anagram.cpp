#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string x,string y)
{
    int a[26]={0};
    int b[26]={0};
    int c=0;
    if(x.size()!=y.size())
        return false;
    while(x[c]!='\0'){
        a[x[c]-'a']++;
        c++;
    }
    c=0;
    while(y[c]!='\0'){
        b[y[c]-'a']++;
        c++;
    }
    for(c=0;c<26;c++){
        if(a[c]!=b[c])
            {
                cout<<c<<". "<<a[c]<<" = "<<b[c]<<endl;
                return false;
            }
    }
    return true;
}
int main()
{
    string x,y;
    cin>>x;
    cin>>y;
    if(isAnagram(x,y)){
        cout<<"Anagram"<<endl;
    }
    else{
        cout<<"Not Anagram"<<endl;
    }


    return 0;
}
