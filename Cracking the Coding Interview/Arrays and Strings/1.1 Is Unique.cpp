#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<char> in_char;
    cout<<"Enter the String: ";
    string input;
    cin>>input;
    int str_length=input.size();
    
    for(int i=0;i<str_length;i++){
        in_char.insert(input[i]);
    }

    if(in_char.size()!=str_length){
        cout<<"Characters are Repeating";
    }
    else{
        cout<<"It's Uniquee";
    }
}