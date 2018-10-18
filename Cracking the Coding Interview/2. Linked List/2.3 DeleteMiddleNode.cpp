#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next=NULL;
};

int main(){
    struct node * head,*current;
    int size;
    cout<<"Enter the size of the SLL: ";
    cin>>size;

    for(int i=0;i<size;i++){
        int data;
        cin>>data;
        struct node *temp;
        temp=new node;
        temp->data=data;
        if(i==0){
            current=temp;
            head=temp;
        }
        else{
            current->next=temp;
            current=temp;
        }
    }

    cout<<"Which Position element you want to Delete: ";
    int pos;
    cin>>pos;

    int check=0;
    node *mover=head;
    for(int i=0;i<(pos-2);i++){
        if(mover->next!=NULL){
            mover=mover->next;
        }
        else{
            check=1; // NOT USED AS 1ST AND LAST ELEMENT ARE INCLUDED.
        }
    }
    mover->next=mover->next->next;

    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
}