#include<iostream>
using namespace std;


void balanceParanthesis(int remaining_left,int remaining_right,char sol[],int pos){
    if(remaining_left==0){
        if(remaining_right==0){
            cout<<sol<<endl;
            return;

        }
        else{
            sol[pos]=')';
            balanceParanthesis(remaining_left,remaining_right-1,sol,pos+1);
        }
    }
    if((remaining_left<remaining_right) && (remaining_left!=0)){
        sol[pos]='(';
        balanceParanthesis(remaining_left-1,remaining_right,sol,pos+1);
        sol[pos]=')';
        balanceParanthesis(remaining_left,remaining_right-1,sol,pos+1);
    }
    if(remaining_left==remaining_right){
        sol[pos]='(';
        balanceParanthesis(remaining_left-1,remaining_right,sol,pos+1);
    }
}

int main(){
    cout<<"Enter the Value of N: ";
    int N;
    cin>>N;
    char arr[2*N];
    balanceParanthesis(N,N,arr,0);
}