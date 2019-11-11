#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
};
node* Root = NULL;

void insert(int value)
{
    node* nptr = new node;
    nptr->data = value;
    nptr->left = NULL;
    nptr->right = NULL;
    if(Root==NULL)
            Root = nptr;
    else{
        node* tptr = Root;
        while(1)
        {
            if(tptr->data > value){
                if(tptr->left==NULL){
                    tptr->left = nptr;
                    break;
                }
                else
                    tptr= tptr->left;
            }
            else{
                if(tptr->right==NULL){
                    tptr->right = nptr;
                    break;
                }
                else{
                    tptr = tptr->right;
                }
            }
        }
    }
}

void print(node* s)
{
    if(s!=NULL){
        print(s->left);
        cout<<s->data<<" ";
        print(s->right);
    }
}
int main()
{
    insert(5);
    insert(50);
    insert(60);
    insert(1);
    print(Root);
    return 0;
}
