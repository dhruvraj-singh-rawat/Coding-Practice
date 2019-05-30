#include <iostream>
using namespace std;

int main() {
	//code
	int test;
	cin>>test;
	
	while(test--){
	    int size,sum;
	    cin>>size>>sum;
	    int arr[size];
	    
	    for(int i=0;i<size;i++){
	        cin>>arr[i];
	    }
	    int i=-1,j=0,temp_sum=0,check=0;
	    
	    while(i<j && j<=size){
	        //cout<<i<<" "<<j<<" "<<temp_sum<<endl;
	        if(temp_sum>sum){
	            i++;
	            //cout<<"here "<<i;
	            temp_sum=temp_sum-arr[i];
	        }
	        else if(temp_sum<sum){
	            temp_sum=temp_sum+arr[j];
	            j++;
	            
	        }
	        else{
	            if(i==-1){
	                cout<<1<<" "<<j<<endl;
	            }
	            else{
	                cout<<i+2<<" "<<j<<endl;
	            }
	            
	            
	            check=1;
	           break;
	        }
	    }
	    if(!check)
	    cout<<-1<<endl;
	}
	return 0;
}