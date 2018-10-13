/*
To write a Program to Delete numbers from Unsorted Linked List.
Follow Up
To do it without taking Extra Space
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node {
    struct node *next=NULL;
    int data;
};
int main(){

    struct node *head,*current,*temp_node;
    temp_node=new node;
    head=new node;
    //head=new node;
    //struct node *head=(struct node *) malloc(sizeof(struct node));
    //struct node *temp=(struct node *) malloc(sizeof(struct node));
    //struct node *current=(struct node *) malloc(sizeof(struct node));

    int size,temp;
    //cout<<size;
    cout<<"How many elements to enter in Linked List: ";
    cin>>size;
    
    //head->next=temp_node;

    for(int i=0;i<size;i++){

        cin>>temp;
        struct node *t;
        t= new node;
        t->data=temp;

        if(i==0){
            head->next=t;
            temp_node=t;
        }
        else{
            temp_node->next=t;
            temp_node=t;
            
        }        

    }
    cout<<"\n";
    set <int> myset;

    for(int i=0;i<size;i++){
        if(myset.find(head->next->data) == myset.end() ){

            //cout<<head->next->data<<" ";
            myset.insert(head->next->data);
            head=head->next;
        }
        else{
            //cout<<"Repeating Element Found :( \n";
            //cout<<head->next->data<<" ";
            head=head->next;
        }

    }
    //cout<<"\n";
    for(auto itr=myset.begin();itr!=myset.end();itr++){
        cout<<*itr<<" ";
    }

}