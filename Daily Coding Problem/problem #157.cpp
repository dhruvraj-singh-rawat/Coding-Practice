'''
This problem was asked by Amazon.

Given a string, determine whether any permutation of it is a palindrome.

For example, carrace should return true, since it can be rearranged to form racecar, which is a palindrome. 
daily should return false, since there\'s no rearrangement that can form a palindrome.



'''


#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    string in;
    cout<<"Enter the String: ";
    cin>>in;
    int arr[128]={0};

    for (int i=0;i<in.length();i++){

        arr[int(in[i])]= arr[int(in[i])]+1;
    }
    int odd=0;

    for (int i=0;i<in.length();i++){

        if(arr[in[i]] %2 !=0 ){
            odd++;
        }
    }
    //cout<<odd;
    if(odd>1){
        cout<<"This String does NOT have a Palindrome Combination";
        
    }
    else{
        cout<<"This String have a Palindrome Combination";
    }

}