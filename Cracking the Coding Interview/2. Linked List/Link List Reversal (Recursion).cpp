#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next=NULL;
};

void insert(struct node *&head,int data){
    struct node *temp;
    temp=new node;
    temp->data=data;

    if(head==NULL){
        head=temp;
    }
    else{
        struct node *current=head;
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
void reverser(struct node *head,struct node *&rev){
    if(head==NULL){
        return ;
    }
    //cout<<head->data<<" ";
    reverser(head->next,rev);
    //cout<<head->data<<" ";
    insert(rev,head->data);

}
int main(){

    struct node *head=nullptr;
    int a=5,b;
    while(a){
        cin>>b;
        insert(head,b);
        a--;
    }
    //display(head);
    struct node *rev=nullptr;
    reverser(head,rev);
    display(rev);


}