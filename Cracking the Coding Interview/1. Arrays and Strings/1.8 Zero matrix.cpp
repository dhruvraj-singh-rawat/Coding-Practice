#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int dim_row,dim_colmn;
    cout<<"Enter the Dimention of the Matrix: ";
    cin>>dim_row>>dim_colmn;
    cout<<"\n";
    int arr[dim_row][dim_colmn];
    vector <int> pos_row,pos_colmn;
    int temp;

    for(int i=0;i<dim_row;i++){
        for(int j=0;j<dim_colmn;j++){
            cin>>temp;
            if(temp==0){
                pos_row.push_back(i);
                pos_colmn.push_back(j);
            }
            arr[i][j]=temp;
        }
    }

    for(int i=0;i<pos_row.size();i++){
        for(int j=0;j<dim_colmn;j++){
            arr[pos_row[i]][j]=0;
        }
    }

    for(int i=0;i<pos_colmn.size();i++){
        for(int j=0;j<dim_row;j++){
            arr[j][pos_colmn[i]]=0;
        }
    }

    for(int i=0;i<dim_row;i++){
        for(int j=0;j<dim_colmn;j++){

            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }


}