#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<char> in_char;
    cout<<"Enter the String: ";
    string input;
    cin>>input;
    int str_length=input.size();
    bool checker[128] ={false};

    if(str_length>128){
        cout<<"Characters are repeating"<<endl;
    }
    //cout<<checker[0];
  
    else{
        int temp,check=0;
        for(int i=0;i<str_length;i++){
            temp=input[i];
            if(checker[temp]==true){
                cout<<"Characters are repeating"<<endl;
                check=1;
                break;
            }
            else{
                checker[temp]=true;
            }
        }
        if(check==0)
        cout<<"All the Characters are Unique";
    }


}