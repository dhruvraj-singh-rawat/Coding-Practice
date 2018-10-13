#include<iostream>
#include<string.h>
#include<sstream>

using namespace std;

int main(){
    string get;
    cin>>get;

    int arr_count[get.size()]={0};
    char arr_char[get.size()];
    int pos=0,decider=0;

    for(int i=0;i<get.size();i++){
        if(i==0){
            arr_count[pos]++;
            arr_char[pos]=get[i];
            pos++;
        }
        else{
            if(arr_char[pos-1]==get[i]){
                arr_count[pos-1]++;
            }
            else{
                arr_char[pos]=get[i];
                arr_count[pos]++;
                decider=decider+arr_count[pos-1]-2;
                pos++;
            }
        }


    }
    decider=decider+arr_count[pos-1]-2;
    stringstream ss;
    if(decider>0){
        for (int i=0;i<pos;i++){
            ss<<arr_char[i]<<arr_count[i];
        }
    }
    else{
        ss<<get;
    }

    cout<<ss.str();
}