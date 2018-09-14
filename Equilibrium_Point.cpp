#include <iostream>
using namespace std;

int main() {
	//code
	int test;
	cin>>test;
	
	while(test--){
	    
	    int size;
	    cin>>size;
	    int arr[size],sum_arr[size];
	    int sum=0;
	    
	    for(int i=0;i<size;i++){
	       cin>>arr[i];

	    }
	    
        int left=0,right=0;
	    int i=0,j=size-1,done=0;
	    
	    if(size==1){
	        cout<<1;
	        break;
	    }
	    
	    left=left+arr[i];
        right=right+arr[j];
        
	    while(i!=j){

            
            //cout<<"POS i:"<<i<<" "<<left<<" POS j:"<<j<<" "<<right<<endl;
	        
	        if(left>right){
	            j--; right=right+arr[j];
	        }
	        else if(left<right){
	            i++; left=left+arr[i];
	        }
	        else if((left==right) ){
                if(i+2==j){
                    cout<<i+2<<endl;
                    done=1;
	                break;
                }

                else if(i+j<size && i<size && j>0){
                    i++;
                    j--;
                    left=left+arr[i];
                    right=right+arr[j];
                }
                else{
                    break;
                } 
                
	        }
	        
	    }
	    //cout<<"Here :"<<done;
	    if(done==0){
	        cout<<-1<<endl;
	    }
	    
	}
	return 0;
}