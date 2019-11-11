#include<bits/stdc++.h>
#define Max 1001
using namespace std;

typedef struct{
    int top;
    int data[Max];
}Struct;

void push(Struct *s,int item)
{
    if(s->top<Max){
        s->data[s->top]=item;
        s->top=s->top+1;
    }
}

int pop(Struct *s)
{
    int item;
    if(s->top==0){
        return -1;
    }
    else{
        s->top = s->top-1;
        item = s->data[s->top];
    }
    return item;
}
void print(Struct *st)
{
    for(int i=0;i<st->top;i++){
        cout<<st->data[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    Struct my_stack;
    my_stack.top=0;
    push(&my_stack,4);
    push(&my_stack,5);
    push(&my_stack,8);
    print(&my_stack);
    int data = pop(&my_stack);
    cout<<data<<endl;
    print(&my_stack);


    return 0;
}
