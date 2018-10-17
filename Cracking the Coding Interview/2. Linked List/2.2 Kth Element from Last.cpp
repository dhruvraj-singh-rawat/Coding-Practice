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

    head=current;
    for(int i=0;i<size;i++){
        int data;
        struct node *temp;
        temp=new node;        
        cin>>data;
        temp->data=data;
        if(i==0){
            current=temp;
        }
        else{
            current->next=temp;
            current=temp;
        }
    }
    cout<<"Which position from End to print: ";
    int k,position=0;
    cin>>k;

    node *current1;
    current1=new node;
    current1=recurser(head->next,k,position);
    cout<<current1->data;


}