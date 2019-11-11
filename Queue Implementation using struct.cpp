#include<bits/stdc++.h>
#define max 100
using namespace std;

typedef struct{
    int font;
    int rear;
    int data[max];
}Struct;
Struct q;

void push(int value)
{
    if(q.rear>=max){
        cout<<"Queue is Full"<<endl;
    }
    else{
        q.data[q.rear]= value;
        q.rear++;
    }

}
void pop()
{
    if(q.font==q.rear){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        q.font++;
    }
}
void print()
{
    for(int i=q.font;i<q.rear;i++){
        cout<<q.data[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    q.rear=0;
    q.font=0;
    push(4);
    push(5);
    push(6);
    print();
    pop();
    print();

    return 0;
}
