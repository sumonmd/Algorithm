#include<bits/stdc++.h>
using namespace std;
int arr[10010];
int caunt = 0;
void Adjacent_From_Bottom(int startIndex, int endIndex)
{
    int data = arr[startIndex];
    int i = startIndex;
    while(i/2>=1){
        if(arr[i/2]>data){
            int item = arr[i/2];
            arr[i/2] = arr[i];
            arr[i]= item;
        }
        else
            break;
    }
}
void insert(int value)
{
    caunt++;
    arr[caunt]=value;
    Adjacent_From_Bottom(caunt,1);
}
void print()
{
    for(int i=1;i<=caunt;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void adjacent_from_top(int startIndex, int endIndex)
{
    int data = arr[startIndex];
    int i = startIndex*2;
    while(i<=endIndex){
        if(i+1<=caunt && arr[i]>arr[i+1]){
            i++;
        }
        else if(data <= arr[i]){
            break;
        }
        else{
            int data = arr[i/2];
            arr[i/2] = arr[i];
            arr[i] = data;
            i=i*2;

        }
    }

}
void remove()
{
    arr[1]=arr[caunt];
    caunt--;
    adjacent_from_top(1,caunt);
}
int main()
{
    insert(5);
    insert(55);
    insert(1);
    insert(11);
    print();
    remove();
    print();

    return 0;
}
