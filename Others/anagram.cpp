#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void anagram(string str_p, string str_txt){
    //cout<<str_p<<" "<<str_p.size();

    int count =0;
    for (int i=0;i<str_txt.length();i++){
        count=0;
        for(int j=0;j<str_p.length();j++){
            if(i+str_p.length()>str_txt.length()){
                break;
            }
            if(str_txt[i+j]==str_p[j]){
                count++;
            }
        }
        if(count==str_p.length()){
            cout<<"The Position: "<<i<<endl;
        }

        

    }
}
int main(){
    string a,b;
    cout<<"Enter the Txt String: ";
    cin>>b;
    cout<<"Enter the Pattern String: ";
    cin>>a;
    
    
    anagram(a,b);


}