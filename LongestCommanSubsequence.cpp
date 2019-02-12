#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int lcs(string str1,string str2, int m , int n){
    int result,temp1,temp2;
    int arr[m][n]={0};
    
    
    if(arr[m-1][n-1]!=0){
        result=arr[m-1][n-1];
    }

    if(m==0 || n==0){
        return 0;
    }
    else if(str1[m-1]==str2[n-1]){
        result=1+lcs(str1,str2,m-1,n-1);
    }
    else if ( str1[m-1] != str2[n-1] ){

        temp1= lcs(str1,str2,m-1,n);
        temp2=lcs(str1,str2,m,n-1);
        result= max(temp1,temp2);
    }
    arr[m-1][n-1]=result;

    return result;


}
int main(){
    string str1,str2;

    cout<<"Enter the First String: ";
    cin>>str1;
    cout<<"Enter the Second String:: ";
    cin>>str2;

    int len1 = str1.length(), len2=str2.length();

    cout<<"The length of Max comman Subsequence is: "<<lcs(str1,str2,len1,len2)<<"\n";
    



}