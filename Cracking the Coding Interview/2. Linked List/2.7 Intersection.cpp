#include<iostream>
using namespace std;

struct node {
    struct node *next=NULL;
    int data;
};

void insert(struct node * &head,int data){
    struct node *temp;
    temp=new node;
    temp->data=data;
    if(head==nullptr){
        head=temp;
    }
    else{
        struct node *current=head;
        while(current->next!=nullptr){
            current=current->next;
        }
        current->next=temp;
        current=temp;

    }
}
void reverser(struct node *head,struct node * &rev){
    if(head==NULL){
        return;
    }
    reverser(head->next,rev);
    insert(rev,head->data);
}
void display(struct node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
}

struct node * check(struct node *head1,struct node *head2){

    struct node *rev1=nullptr,*rev2=nullptr;
    reverser(head1,rev1);
    reverser(head2,rev2);
    //display(rev1);
    //int count=0;
    //struct node *temp;
    //cout<<"here 1 ";
    while(rev1!=NULL && rev2!=NULL){
        cout<<"here 2 before ";
        if(&rev1!=&rev2){
            return nullptr;
        }

        cout<<"here 2 ";
        if(rev1->next==rev2->next){
            rev1=rev1->next;
            rev2=rev2->next;
        }
        else{
            return rev1;
        }

    }

}

int main(){
    struct node *head1=nullptr,*head2=nullptr;

    cout<<"Enter the Size and the Elements of 1st SLL: ";
    int size,vari;
    cin>>size;
    
    while(size){
        cin>>vari;
        insert(head1,vari);
        size--;
    }

    cout<<"Enter the Size and the Elements of 2nd SLL: ";    
    cin>>size;    
    while(size){
        cin>>vari;
        insert(head2,vari);
        size--;
    }
    struct node *temp=head1;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head2;
    //display(head1);

    temp=check(head1,head2);
    cout<<"\nThe Data Hold by the Intersecting node is: "<<temp->data;
}