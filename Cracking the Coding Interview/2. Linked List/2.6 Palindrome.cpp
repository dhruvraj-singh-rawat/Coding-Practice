#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
    struct node *next=nullptr;
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

bool palindrome(struct node *head){
    struct node *p,*q;
    p=head;
    q=head;
    //detective=head;
    stack <int> s;
    
    
    while(q!=nullptr && q->next!=nullptr){
        //cout<<"here1";
        q=q->next->next;
        //cout<<"here2";
        s.push(p->data);
        p=p->next;
        //cout<<"\nThe value of p is "<<p->data<<" the value of q is "<<q->data;
    }
    //cout<<"here2";
    if(q!=NULL){
        p=p->next;
    }

    
    while(p!=NULL){
        if(p->data==s.top()){
            p=p->next;
            //detective=detective->next;
            s.pop();
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){

    cout<<"Enter the Size and the Elements of the SLL: ";
    int size,vari;
    cin>>size;
    struct node *head=nullptr;
    while(size){
        cin>>vari;
        insert(head,vari);
        size--;
    }
    
    cout<<"Is SLL Palindrome? "<<palindrome(head);
}