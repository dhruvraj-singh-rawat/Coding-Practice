#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	//code
	int test;
	cin>>test;
	
	for(int i=0;i<test;i++){
	    int n=0,k=0,check=0,input;
	    cin>>n>>k;
	    //int arr[n];
	    
        set<int> s;
	    for (int j=0;j<n;j++){
            cin>>input;
	        s.insert(input);
	    }
	    vector<int> arr;
        arr.assign(s.begin(),s.end());
        n=arr.size();
	    sort(arr.begin(),arr.end());
	    
	    
	    for(int a=0;a<n-3;a++){
	        for(int b=a+1;b<n-2;b++){
	            int c=b+1,d=n-1;
                int sum=arr[a]+arr[b]+arr[c]+arr[d];
	            cout<<sum<<endl;
	            if(sum ==k){
	                cout<<arr[a]<<" "<<arr[b]<<" "<<arr[c]<<" "<<arr[d]<<" "<<"$";
                    //cout<<++check;
                    //cout<<"Here :("<<endl;
                    check++;
    
	                c++;d--;
	            }
	            else if((arr[a]+arr[b]+arr[c]+arr[d]) >k){
	                d--;
	            }
	            else if ((arr[a]+arr[b]+arr[c]+arr[d]) <k){
	                c++;
	            }
	        }

	    }
	    
	}
	
	return 0;
}