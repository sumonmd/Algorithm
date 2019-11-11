#include<bits/stdc++.h>
using namespace std;
int arr[10010];
int cnt= 0;
void Adjacent_from_Bottom(int startIndex, int endIndex)
{
    int data = arr[startIndex];
    int i = startIndex;
    while(i/2>=1){
        if(arr[i/2]<data){
            int item = arr[i/2];
            arr[i/2] = arr[i];
            arr[i] = item;
            i=i/2;
        }
        else
            break;
    }
}
void insert(int data)
{
    cnt++;
    arr[cnt]=data;
    Adjacent_from_Bottom(cnt,1);
}
void print()
{
    for(int i=1;i<=cnt;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    cout<<"Now I write code about Max Heap"<<endl;
    insert(1);
    insert(3);
    insert(8);
    insert(90);
    insert(5);
    print();


    return 0;
}
