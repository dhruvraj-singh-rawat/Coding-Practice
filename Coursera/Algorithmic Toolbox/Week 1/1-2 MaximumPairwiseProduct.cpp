#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long maxproduct(vector <int> vect){
    int size=vect.size();
    int i1=0;
    long long temp;

    for(int i=1;i<size;i++){
        if(vect[i1]<vect[i]){
            i1=i;
        }
    }
    temp=vect[size-1];
    vect[size-1]=vect[i1];
    vect[i1]=temp;

    i1=0;
    for(int i=1;i<size-1;i++){
        if(vect[i1]<vect[i]){
            i1=i;
        }
    }

    //cout<<"The value of : "<<vect[size-1]<<" and : "<<vect[size-2]<<"\n";

    temp=vect[size-2];
    vect[size-2]=vect[i1];
    vect[i1]=temp;
    //cout<<"The value of : "<<vect[size-1]<<" and : "<<vect[size-2]<<"\n";
    return ((long long )vect[size-1])*((long long )vect[size-2]);

}
int main(){
    int a;
    cin>>a;
    vector <int> vect (a);
    for(int i=0;i<a;i++){
        cin>>vect[i];
    }
    long long result =maxproduct(vect);
    cout<<result;
}