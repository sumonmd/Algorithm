#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};
node* Head = NULL;
void insert(int value)
{
    node* nptr =  new node;
    nptr->data =  value;
    nptr->next = NULL;

    if(Head==NULL){
        Head = nptr;
    }
    else{
        node* tptr = Head;
        while(tptr->next!=NULL){
            tptr = tptr->next;
        }
        tptr->next = nptr;
    }
}
void remove_last()
{
    node* ptr = Head;
    while(ptr->next->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=NULL;
}

void print()
{
    node* ptr = Head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}
int main()
{
    insert(5);
    insert(6);
    insert(7);
    print();
    remove_last();
    print();


    return 0;
}
