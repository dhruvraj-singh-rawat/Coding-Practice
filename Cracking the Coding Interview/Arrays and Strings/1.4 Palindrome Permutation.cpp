#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[25];
    int count[128]={0};
    cin.getline(a,25);
    //cout<<a<<endl<<strlen(a);
    for(int i=0;i<strlen(a);i++){
        if(int(tolower(a[i]))!=32){
            //cout<<i<<" "<<int(tolower(a[i]))<<endl;
            ++count[int(tolower(a[i]))];
        }
    }
    int sum_even=0,sum_odd=0;
    for(int j=0;j<128;j++){
        if(count[j]%2!=0){
            //cout<<j<<endl;
            sum_odd=sum_odd+count[j];
        } 
    }
    if(sum_odd>1){
        cout<<"No: ";
        //cout<<sum_odd;
    }
    else{
        cout<<"Yes";
    }
}