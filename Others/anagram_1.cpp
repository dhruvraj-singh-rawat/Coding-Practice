#include<iostream>
#include<string.h>
using namespace std;

int compare(int arr_txt[],int arr_pat[]){
    for(int i=0;i<128;i++){
        if(arr_txt[i]!=arr_pat[i]){
            
            return 0;
            
        }
    }
    return 1;
}
void anagram(string txt,string pat){
    int arr_txt[128]={0};
    int arr_pat[128]={0};

    for (int i=0;i<pat.length();i++){
        arr_txt[int(txt[i])]++;
        arr_pat[int(pat[i])]++;
    }
    for(int i=pat.length();i<=txt.length();i++){
        if(compare(arr_pat,arr_txt)){
            cout<<"Match Position : "<<i-pat.length()<<endl;
        }
        arr_txt[int(txt[i])]++;
        arr_txt[int(txt[i-pat.length()])]=0;

    }





}

int main(){
    string txt,pat;
    cin>>txt>>pat;

    anagram(txt,pat);


    return 0;
}