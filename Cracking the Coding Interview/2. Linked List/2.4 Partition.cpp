#include<iostream>
using namespace std;

struct node{
    struct node *next=NULL;
    int data;
};

void insert(struct node * &head,int data){
    struct node * temp;
    temp=new node;
    temp->data=data;

    if(head==NULL){
        head=temp;
    }
    else{
        struct node * current=head;
        while(current->next!=NULL){
            current=current->next;
        }
        current->next=temp;
        current=temp;
    }
}

void display(struct node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
}

int main(){
    cout<<"Size of the SLL: ";
    int size;
    cin>>size;

    struct node *head=nullptr;
    cout<<":Enter Elements in SLL:\n";

    while(size){
        int temp;
        cin>>temp;
        insert(head,temp);
        --size;
    }

    cout<<"Enter the Element from where you want to Partition: ";
    int k;
    cin>>k;

    struct node *smaller=nullptr,*bigger=nullptr;
    struct node *traveller=head;
    while(traveller!=NULL){
        if(traveller->data>k){
            insert(bigger,traveller->data);
            traveller=traveller->next;
        }
        else{
            insert(smaller,traveller->data);
            traveller=traveller->next;
        }
    }
    traveller=smaller;
    while(traveller->next!=NULL){
        traveller=traveller->next;
    }
    traveller->next=bigger;


    //cout<<head->next->next->data<<" ";
    display(smaller);
    //cout<<head->data;

    
}