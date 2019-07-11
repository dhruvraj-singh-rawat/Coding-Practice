/*
The edit distance between two strings refers to the minimum number of character insertions, deletions, and substitutions 
required to change one string to the other. For example, the edit distance between “kitten” and “sitting” is three: 
substitute the “k” for “s”, substitute the “e” for “i”, and append a “g”.

*/

#include<iostream>
#include<string>
#include <algorithm> 
using namespace std;

int findMin(int a , int b , int c){
    int z = (a < b) ? a : b;
    return ((z < c) ? z : c);
}

int editDistance ( string a , string b){
    int arr[a.length()+1][b.length()+1];

    for ( int i=0;i<a.length()+1;i++){
        for (int j=0;j<b.length()+1;j++){
            if(i==0)
                arr[i][j]=j;
            else if (j==0)
                arr[i][j]=i;

            else if (a[i-1]==b[j-1]){
                arr[i][j]=arr[i-1][j-1];
            }
            else if (a[i-1]!=b[j-1]){
                arr[i][j]=findMin(arr[i-1][j-1],arr[i-1][j],arr[i][j-1])+1;
            }
        }
    }


    return arr[a.length()][b.length()];
}
int main(){

    string a,b;
    cout<<"Enter the 1st String: ";
    cin>>a;
    cout<<"Enter the 2nd String: ";
    cin>>b;
    cout<<"The Edit Distance is: "<<editDistance(a,b)<<"\n";

}