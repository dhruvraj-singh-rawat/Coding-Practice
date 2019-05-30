
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void countDistinct(int [], int , int );
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		countDistinct(a,k,n);cout<<endl;
	}
	return 0;
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete below method */
void countDistinct(int A[], int k, int n)
{
    //Your code here
    
    for(int i=0;i<n;i++){
        set<int> my;
        int count=0;
        if((i+k)<n){
            //cout<<"Here";
            for(int j=i;j<i+k;j++){
                if(my.find(A[j])==my.end()){
                    my.insert(A[j]);
                    count++;
                    //cout<<"Here 1";
                }
            }
            //cout<<"Here 2";
            cout<<count<<" ";
        //cout<<":"<<i<<" "<<count<<" ";
        }
        
    }
    cout<<endl;
}