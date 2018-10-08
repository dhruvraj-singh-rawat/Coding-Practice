#include<iostream>
using namespace std;

int main(){

    cout<<"Enter the Array Dimentions: ";
    int dim;
    cin>>dim;
    int arr[dim][dim];
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            cin>>arr[i][j];
        }
    }

    int layer=0;
    while(layer<dim/2){
        int start=layer;
        int end=dim-layer-1;

        for(int i=start;i<end;i++){
            int offset=i-start;
            //TOP
            int temp=arr[start][i];
            //LEFT
            arr[start][i]=arr[end-offset][start];
            //BOTTOM
            arr[end-offset][start]=arr[end][end-offset];
            //RIGHT
            arr[end][end-offset]=arr[i][end];
            arr[i][end]=temp;
        
        }
    layer++;
    }
    cout<<"\n";
    
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
             cout<<arr[i][j]<<" ";
         }
    cout<<"\n";
    }
}