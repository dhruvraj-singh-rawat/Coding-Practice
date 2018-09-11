#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int test;
	cin>>test;
	while(test--){
	    int size;
	    cin>>size;
	    
	    int arr[size];
	    
	    for(int i=0;i<size;i++){
	        cin>>arr[i];
	    }
	    vector <int> help;
	    int max=arr[size-1];
	    help.push_back(max);
	    
	    for(int i=size-1;i>0;i--){
	        if(arr[i]>max){
	            max=arr[i];
	            help.push_back(max);
	        }
	    }
	    
	    for (auto itr = help.end()-1;itr>=help.begin();itr--)
	        cout<<*itr<<" ";
	    cout<<endl;     
	}
	return 0;
}