#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;

int main(){

    string word1,word2,word3;

    for (int i=1;i<=3;i++){

        if(i==1){
            cout<<"Inside Fist"<<endl;
            getline(cin,word1);
            for(int j=0;j<word1.length();j++){
                if(word1[j]=='a' || word1[j]=='e' || word1[j]=='i' || word1[j]=='o' || word1[j]=='u')
                word1[j]='#';
            }
            //final_word.insert(0,word);
        }
        else if (i==2){
            cout<<"Inside Second"<<endl;

            getline(cin,word2);
            for(int j=0;j<word2.length();j++){
                if(word2[j] !='a' && word2[j] !='e' && word2[j] !='i' && word2[j] !='o' && word2[j] !='u')
                word2[j]='&';
            }
           // final_word.insert(5,word);

        }
        else if (i==3){

            cout<<"Inside Third"<<endl;

            getline(cin,word3);
            for(int j=0;j<word3.length();j++){

                word3[j]=toupper(word3[j]);

            }
            //final_word.insert(10,word);
        }
    }
    cout<<word1+word2+word3<<endl;
    string a="Hello ",b="World";
    cout<<a+b;

    return 0;

}