#include<iostream>
#include<bits/stdc++.h>
using namespace std;

map<char,int> define_map(string input_string){
    map<char,int> char_map;

    for (int i=0;i<input_string.length();i++){
        
        if(char_map.count(input_string[i])==0){
            char_map.insert({input_string[i],1});
        }
        else{
            
            char_map[input_string[i]]=char_map.at(input_string[i])+1;
            //char_map.insert({input_string[i],(char_map.at(input_string[i])+1)});
        }

    }
    return char_map;
}

void string_permutes(map<char,int> char_dict,char sol[],int pos,int string_size){
    
    if(pos==string_size){
        cout<<sol<<endl;
        return;
    }
    int i=0;
    auto itr = char_dict.begin();
    for(itr,i;i<char_dict.size(),itr!=char_dict.end();i++,itr++){
        
        if(itr->second==0){
            continue;
        }

        sol[pos]=itr->first;
        //cout<<"The situation of the array is "<<sol<<" the being appended is "<<itr->first<<endl;
        itr->second=itr->second-1;

        string_permutes(char_dict,sol,pos+1,string_size);
        itr->second=itr->second+1;
        


    }
}

int main(){

    string input_string;
    cout<<"Input the String to find Combinations for : ";
    cin>>input_string;
    map<char,int> char_map;

    char_map = define_map(input_string);

    
    char sol[input_string.length()];
    cout<<"The Possible Combination are: "<<endl;
    string_permutes(char_map,sol,0,input_string.length());
    


    /*
    for (auto itr= char_map.begin();itr!=char_map.end();itr++){
        if(itr->first=='a'){
            itr->second=2;
        }
        //cout<<itr->first<<" "<<itr->second<<endl;
        
    }
    */



}
