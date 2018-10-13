#include<iostream>
#include<string>
using namespace std;

int main(){

    string a,b;
    cout<<"Enter First String: ";
    cin>>a;
    cout<<"Enter the Second String: ";
    cin>>b;

    int check[128]={0};
    for(int i=0;i<a.size();i++){
        
        ++check[int(a[i])];
    }
    int count=0;
    for(int j=0;j<b.size();j++){
        //cout<<check[int(b[j])]<<endl;
        if(check[int(b[j])]>0){
            
            check[int(b[j])]--;
        }
        else{
            count++;
        }
        
    }
  /*  
    for(int k=0;k<128;k++){
        if(check[k]>0){
            count=count+check[k];
        }
    }
*/
    if(count<=1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}