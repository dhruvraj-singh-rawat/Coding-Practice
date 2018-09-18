#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[13];
    cout<<"Enter the String: ";
    cin.getline(str,13);
    
    stack<char> sk;
    int check=0;
    for(int i=strlen(str)-1;i>=0;i--){
        if(str[i]==' ' && check !=0){
            sk.push('0');
            sk.push('2');
            sk.push('%');
            //cout<<"Here";
        }
        else if(str[i]!=' '){
            sk.push(str[i]);
            check=1;
            //cout<<i<<endl;
        }

    }
    //cout<<sk.size()<<endl;
    while(!sk.empty()){
        cout<<sk.top();
        sk.pop();
    }

}