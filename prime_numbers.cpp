#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int main(){
    int num;
    cin>>num;

    bool prime[num];
     memset(prime, true, sizeof(prime)); 
    for(int i=2;i*i<num;i++){
        if(prime[i]){
            for(int j=i*2;j<num;j=j+i){
                prime[j]=false;
            }
        }

    }

    cout<<"The List of Prime Number are till the given range:"<<endl;

    for(int i=2;i<num;i++){
        if(prime[i]){
            cout<<i<<" ";
        }
    }
}