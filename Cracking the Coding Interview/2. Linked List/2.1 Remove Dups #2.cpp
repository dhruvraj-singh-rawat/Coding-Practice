#include<iostream>
using namespace std;

struct node{
    struct node *next=NULL;
    int data;
};

int main(){
    int loop,temp;
    //cin>>loop;
    cout<<"How many Elements to Insert: ";
    cin>>loop;

    node *head=NULL,*tail=NULL;
    
    for(int i=0;i<loop;i++){
        node *temp_node=new node;
        cin>>temp;
        temp_node->data=temp;

        if(head==NULL){
            head=temp_node;
            tail=temp_node;
        }
        else{
            tail->next=temp_node;
            tail=tail->next;
        }
        
    }
    cout<<"Printing the Inseted Numbers in Linked List: \n";
    node *head_1=head;
    while(head_1!=NULL){
        cout<<head_1->data<<" ";
        head_1=head_1->next;
    }

    cout<<"\nNow removing the Duplicated: \n";
    node *head_2=head;

    while(head_2!=NULL){
        node *head_3=head_2;
        cout<<"Here 1";
        while(head_3!=NULL){
            if(head_2->data==head_3->next->data && head_3->next != NULL){
                head_3->next=head_3->next->next;
                cout<<"Here 2";
            }
            else{
                head_3=head_3->next;
                cout<<head_3->data;
            }
            //cout<<"Here 4";
        }
        cout<<"Here 5";
        head_2=head_2->next;
    }

    cout<<"Printing the DeDuplicated Numbers in Linked List: \n";
    node *head_4=head;
    while(head_4!=NULL){
        cout<<head_4->data<<" ";
        head_4=head_4->next;
    }
}