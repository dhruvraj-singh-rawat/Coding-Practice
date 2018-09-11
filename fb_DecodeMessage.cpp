#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int decoder(string number,int pos){

    int size=number.size();
    int location = size - pos;
    int result=0;

    if(pos==0){
        //cout<<"111 The value of this location: "<<number[location]<<" value of pos "<<pos<<" value of location "<<location<<endl;
        return 1;
    }
        
    if(number[location]=='0'){
        
        return 0;
    }
        
    result=decoder(number,pos-1);
   
    if(number[location]=='1' || (number[location+1] <'7' && number[location]=='2' )){

        //cout<<"111 The value of this location: "<<number[location]<<" value of pos "<<pos<<" value of location "<<location<<endl;
        result=result+decoder(number,pos-2);
    }
    
    return result;

}


int main(){
    cout<<"Enter the Number: ";
    string number;
    cin>>number;

    int ways;
    cout<<endl<<decoder(number,number.size());
    
}