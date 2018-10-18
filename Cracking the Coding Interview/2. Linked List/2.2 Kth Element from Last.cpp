#include<iostream>
using namespace std;

struct node{
    struct node *next=NULL;
    int data;
};

node * recurser(struct node *head,int k,int& i){
    if(head==NULL){
        return NULL;
    }
    node *nd=recurser(head->next,k,i);
    i=i+1;
    cout<<"The value of i is: "<<i<<"\n";
    

    if(i==k){

        return head;
    }
       

    return nd;
    
}

int main(){
    struct node *current,*head;
    current=new node;
    int size;
    cout<<"How many elements to Insert LL: ";
    cin>>size;

    
    for(int i=0;i<size;i++){
        int data;
        struct node *temp;
        temp=new node;        
        cin>>data;
        temp->data=data;
        if(i==0){
            current=temp;
            head=current;
        }
        else{
            current->next=temp;
            current=temp;
            //cout<<current->data<<"\n\n";
        }
    }
    int k;
    cout<<"Enter the kth Position: ";
    cin>>k;

    struct node *p ,*q ;
    p=new node;
    q=new node;
    p=head;
    q=head;

    for(int i=0;i<(k);i++){
        if(p!=NULL){
            p=p->next;
            //cout<<"At i: "<<i<<" iteration the value of p is "<<p->data<<"\n";
        }
    }
    //cout<<"Here";
    cout<<"Position pointed by P is: "<<p->data<<"\n";
    cout<<"Position pointed by Q is: "<<q->data<<"\n";
    while(p!=NULL){
        p=p->next;
        q=q->next;
    }
    cout<<"\nData at kth Node from End is: "<<q->data;



}