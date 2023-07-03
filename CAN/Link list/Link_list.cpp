#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int val){data=val; next=NULL;}
};

void insert(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL){head=n; return;}
    node* temp;
    temp=head;
    while(temp->next!=NULL){temp=temp->next;}
    temp->next=n;
}

void print(node* kaali)
{
    node* show=kaali;
    while(show!=NULL){cout<<show->data<<" ";show=show->next;}
    cout<<endl;
}


int main()
{
    int num,act;
    node* jach=NULL;
    cout<<"How many number u wanted to add: ";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cout<<"Number: ";
        cin>>act;
        insert(jach,act);
    }
    print(jach);
}