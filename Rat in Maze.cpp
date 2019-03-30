#include<iostream>
using namespace std;

int arr[4][4]=
            {{1,0,1,0},
            {1,1,1,1},
            {0,0,0,1},
            {0,0,0,1}};

int sol[4][4]={0};

int N=4,M=4;

bool safe_matrix(int arr[][4],int m,int n){
    if(m>M-1 || n>N-1){
        return false;
    }
    return true;
}

bool solver(int arr[][4],int m,int n,int sol[][4]){
    bool solution;
    if(m==M-1 && n==N-1 && arr[m][n]==1){
        cout<<m<<" "<<n<<"\n";
        sol[m][n]=1;
        return true;
    }
    else if(safe_matrix(arr,m,n)){

        if(arr[m][n]==1){
        sol[m][n]=1;
        solver(arr,m+1,n,sol);
        solver(arr,m,n+1,sol);
        }


    }
    else{
            sol[m][n]=0; // And Backtrack
    }

    return solution;
}



int main(){
    solver(arr,0,0,sol);
    
    if(sol[M-1][N-1]==1){
        cout<<"Path Available\n";
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                cout<<sol[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    else{
        cout<<"Path Not available";

        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                cout<<sol[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

}