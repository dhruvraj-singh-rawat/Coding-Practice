#include<iostream>
using namespace std;

int ** inputer(int **arr){
    

    for(int i=0;i<10;i++){
        arr[i] =new int[10];
        for(int j=0;j<10;j++){
            arr[i][j]=i+j;
        }
    }    
}

int **outputter(int **arr){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int **arr= new int*[10];    
    inputer(arr);
    outputter(arr);
}

 