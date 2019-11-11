#include<bits/stdc++.h>
using namespace std;

string Equal(string num,int ln)
{
    for(int i=0;i<ln;i++){
        num = "0"+num;
    }
    return num;
}

string Addition(string num1, string num2)
{
    int ln1 = num1.size();
    int ln2 = num2.size();
    if(ln1<ln2){
        num1 = Equal(num1,ln2-ln1);
    }
    else{
        num2 = Equal(num2,ln1-ln2);
    }
    string sum = "";
    int carry = 0;
    int ln = max(ln1,ln2);
    for(int i=ln-1;i>=0;i--){
        int x = (num1[i]-48)+(num2[i]-48)+carry;
        sum = (char)((x%10)+48)+sum;
        carry = x/10;
    }
    if(carry>0){
        sum=(char)(carry+48)+sum;
    }
    return sum;
}
int main()
{

    string fibo[5001];
    fibo[0]="0";
    fibo[1] = "1";
    for(int i=2;i<5001;i++){
        fibo[i]=Addition(fibo[i-1],fibo[i-2]);
    }
    int n;
    cin>>n;
    cout<<fibo[n]<<endl;

    return 0;
}
