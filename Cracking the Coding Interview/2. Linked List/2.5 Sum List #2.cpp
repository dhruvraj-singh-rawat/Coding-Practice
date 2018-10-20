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
        cout<<head->data<<" ";
        head=head->next;
    }
}

void reverser(struct node *head,struct node *&rev){

    if(head==NULL){
        return ;
    }
    reverser(head->next,rev);
    insert(rev,head->data);

}

struct node *sum(struct node *node1,struct node *node2){
    
    int carry=0,sum=0,temp1,temp2;
    struct node *sol_s=nullptr;
    while(node1!=NULL || node2!=NULL || carry!=0){
        
        if(node1!=NULL){
            temp1=node1->data;
            node1=node1->next;
        }
        else{
            temp1=0;
        }

        if(node2!=NULL){
            temp2=node2->data;
            node2=node2->next;
        }
        else{
            temp2=0;
        }

        sum=temp1+temp2+carry;
        if(sum>9){
            carry=1;
            sum=sum%10;
        }
        else{
            carry=0;
            
        }
        insert(sol_s,sum);

    }

    return sol_s;
}

int main(){
    struct node *head1=nullptr,*head2=nullptr;
    int size1,temp,size2;

    cout<<"Enter the Size and Elements of 1st SLL: ";
    cin>>size1;    
    while(size1>0){
        cin>>temp;
        insert(head1,temp);
        size1--;
    }

    cout<<"Enter the Size and Elements of 2nd SLL: ";
    cin>>size2;    
    while(size2){
        cin>>temp;
        insert(head2,temp);
        size2--;
    }

    //display(head1);

    struct node *head1_rev=nullptr,*head2_rev=nullptr;
    
    reverser(head1,head1_rev);
    //display(head1_rev);
    reverser(head2,head2_rev);
    //display(head2_rev);

    struct node *sol=sum(head1_rev,head2_rev);

    struct node *sol_r=nullptr;
    reverser(sol,sol_r);
    display(sol_r);

    //recurser(head);
    //cout<<recurser(head)<<" ";
}