#include<bits/stdc++.h>
using namespace std;

int cnt=0;
int arr[100];

void adjacent_from_bottom(int startIndex,int endIndex)
{
    int item = arr[startIndex];
    int i=startIndex;
    while(i/2 >=1){
        if(arr[i/2] < item){
            arr[i]=arr[i/2];
            i=i/2;
        }
        else{
            break;
        }
    }
    arr[i]=item;
}
void adjacent_from_top(int startIndex, int endIndex)
{
    int item = arr[startIndex];
    int i=startIndex*2;

    while(i<=endIndex){
        if(i+1<=endIndex && arr[i]<arr[i+1]){
            i+=1;
        }
        else if(item>=arr[i]){
            break;
        }
        else{
            int temp = arr[i/2];
            arr[i/2] = arr[i];
            arr[i] = temp;
            i=i*2;

        }
    }

}

void insert(int value)
{
    cnt++;
    arr[cnt]=value;
    adjacent_from_bottom(cnt,1);
}
void remove()
{
    arr[1]=arr[cnt];
    cnt--;
    adjacent_from_top(1,cnt);
}
int main()
{
    insert(5);
    insert(6);
    insert(67);
    insert(34);
    remove();
    cout<<arr[1]<<endl;

}
