#include<iostream>
using namespace std;

struct node {
    int data;
    struct node * next =NULL;
};

void insert(struct node *&head,int data){
    
    struct node *temp;
    temp=new node;
    temp->data=data;

    if(head==NULL){
        head=temp;
        //current=temp;
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


struct node * sum(struct node *node1,struct node *node2){
    int temp1=0,temp2=0,sum=0,carry=0;

    struct node *node3=nullptr;
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
        
        
        cout<<"Current Sum is: "<<sum<<" and carry is: "<<carry<<"\n";
        insert(node3,sum);  

    }

    //display(node3);
    return node3;
}




int main(){
    cout<<"Enter the Size Followed by Elements of the 1st SLL: ";
    int size1,size2,temp;
    cin>>size1;
    struct node *head1=nullptr,*head2=nullptr,*head3=nullptr;
    while(size1>0){
        cin>>temp;
        insert(head1,temp);
        size1--;
    }

    cout<<"Enter the Size followed by the Elements of the 2nd SLL: ";
    cin>>size2;
    while(size2>0){
        cin>>temp;
        insert(head2,temp);
        size2--;
    }
    //display(head1);
    //display(head2);
    cout<<"The Resultant Summed SLL is:\n";
    head3=sum(head1,head2);
    display(head3);

}