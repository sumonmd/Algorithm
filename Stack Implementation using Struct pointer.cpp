#include<bits/stdc++.h>
#define max 100
using namespace std;

typedef struct
{
    int top;
    int data[max];
}Struct;

Struct my_stack;

void push(int value)
{
    if(my_stack.top<max){
       my_stack.data[my_stack.top]=value;
       my_stack.top++;
    }
    else{
        cout<<"Your Stack is Full"<<endl;
    }
}

void pop()
{
    if(my_stack.top<1){
        cout<<"Your Stack is Empty"<<endl;
    }
    else{
        my_stack.top--;
    }
}
void print()
{
    for(int i=0;i<my_stack.top;i++){
        cout<<my_stack.data[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    my_stack.top = 0;
    push(4);
    push(5);
    push(6);
    print();
    pop();
    print();




    return 0;
}
