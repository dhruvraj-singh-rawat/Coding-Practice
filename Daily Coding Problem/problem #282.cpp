#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of Elements in String: ";
    
    cin>>n;

    int arr[n];

    for (int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    for (int i=0;i<n;i++){
     arr[i]=arr[i]*arr[i];
        
    }
    

   sort(arr,arr+n);

    
    int check =1;
    for(int i1=n-1;(i1>=0 && check!=0);i1--){

        for(int j=0,k =(i1-1);j!=k;){

             if((arr[j])+(arr[k])==(arr[i1])){
                 cout<<"Triplet is available"<<arr[j]<<" "<<arr[k];
                 check=0;
                 break;
             }
             else if ((arr[j])+(arr[k]) < ( arr[i1])){
                j++;
             }
             else if((arr[j])+(arr[k]) >(arr[i1])){
                 k--;
             }
             else if (j==k){
                 cout<<"Triplet Not available";
                 return 0;
             }
             cout<<"Here INside Loop "<<" "<<arr[j]<<" "<<arr[k]<<"\n";
        }
        if(check==0){
            //cout<<"Inside Outer Break";
            return 0;
        }
        
    }

    cout<<"Triplet Not available";

}
