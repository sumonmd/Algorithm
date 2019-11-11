#include<bits/stdc++.h>
using namespace std;

int getMin(int arr[],int n,int x)
{
    int min_ln=n+1;
    for(int i=0;i<n;i++){
       int sum=arr[i];
        if(sum>x)
            return 1;

        for(int j=i+1;j<n;j++){
            sum+=arr[j];
            if(sum>x && (j-i+1)<min_ln){
                min_ln=j-i+1;
            }
        }
    }
    return min_ln;
}
int main()
{
    int arr1[] = {1, 4, 45, 6, 10, 19};
    int x = 51;
    int ln=sizeof(arr1)/sizeof(arr1[0]);
    cout<<getMin(arr1,ln,x)<<endl;
    //int min_ln = getMin(arr1,ln,x);

    return 0;
}
