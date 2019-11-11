#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string x,string y)
{
    if(x.size()!=y.size()){
        return false;
    }
    int caunt1[26]={0};
    int caunt2[26]={0};
    for(int i=0;i<x.size();i++){
        caunt1[x[i]-'a']++;
        cout<<x[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<y.size();i++){
        caunt2[y[i]-'a']++;
    }
    int ck=0;
    for(int i=0;i<x.size();i++){
        if(caunt1[i]!=caunt2[i]){
            return false;
        }
    }
    return true;

}
int main()
{
    string x,y;
    getline(cin,x);
    getline(cin,y);
    if(isAnagram(x,y)){
        cout<<"Anagram"<<endl;
    }
    else{
        cout<<"Not Anagram"<<endl;
    }


    return 0;
}
