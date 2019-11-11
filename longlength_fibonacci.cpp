#include<bits/stdc++.h>
using namespace std;


string Adjust(string str,int ln)
{
    for(int i=0;i<ln;i++){
        str = "0"+str;
    }
    return str;
}

string Add(string num1,string num2)
{
    int ln1 = num1.size();
    int ln2 = num2.size();
    if(ln1<ln2){
        num1 = Adjust(num1,ln2-ln1);
    }
    else{
       num2 =  Adjust(num2,ln1-ln2);
    }
    string sum="";
    int carry = 0;
    for(int i=num1.size()-1;i>=0;i--){
        int x = (num1[i]-48)+(num2[i]-48)+carry;
        sum=(char)((x%10)+48)+sum;
        carry = x/10;
    }
    if(carry >0){
        sum =(char) (carry+48)+sum;
    }
    return sum;
}
int main()
{
    string fibo[5001];
    fibo[0]="0";
    fibo[1]="1";
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        fibo[i]=Add(fibo[i-1],fibo[i-2]);
    }
    for(int i=0;i<n;i++){
        cout<<fibo[i]<<" ";
    }

    return 0;
}
