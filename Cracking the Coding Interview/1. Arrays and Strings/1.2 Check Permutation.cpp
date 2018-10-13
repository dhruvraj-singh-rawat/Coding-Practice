#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string first_str,second_str;
    cout<<"Input 1st String: ";
    cin>>first_str;
    cout<<"Input 2nd String: ";
    cin>>second_str;

    int a1[128]={0},a2[128]={0},check=1;

    for(int i=0;i<first_str.size();i++){
        //cout<<a1[int(second_str[i])]<<" ";
        a1[int(first_str[i])]++;
        //cout<<a1[int(second_str[i])]<<" "<<endl;
    }

    for(int j=0;j<second_str.size();j++){
        if(a1[int(second_str[j])]>0){
            
            a1[int(second_str[j])]--;
        }
        else{
            cout<<"Not Permutation :( ";
            check=0;
            break;
        }
        
    }
    if(check==1){
             cout<<"The second string is a Permutation :) ";
    }
   


}