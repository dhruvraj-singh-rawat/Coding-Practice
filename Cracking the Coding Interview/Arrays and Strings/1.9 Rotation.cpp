#include<iostream>
#include<string>
using namespace std;

bool isSubstring(string s1,string s2){
    int j=0,count=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]==s2[j] && s2.size()!=count){
            j++;
            count++;
        }
        else if(s2.size()==count){
            return true;
        }
        else{
            j=0;
            count=0;
        }
    }
    if(count==s2.size()){
        return true;
    }

    return false;
}
int main(){

    cout<<"Input the Main String: ";
    string s1;
    cin>>s1;

    cout<<"Input the String to check for: ";
    string s2;
    cin>>s2;

    if(s1.size()==s2.size() && s1.size()!=0){
        string s1s1=s1+s1;
        cout<<isSubstring(s1s1,s2);
    }
    else{
        cout<<"Wrong Length Strings Entered";
    }

    
}