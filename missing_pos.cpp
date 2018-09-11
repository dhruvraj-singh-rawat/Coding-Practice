#include <iostream>
using namespace std;

int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int remove(int arr[],int size){
    int j=0,temp;
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            swap(&arr[i],&arr[j]);
            j++;
        }
    }
    return j;
}
int missing(int arr[],int size){
    	   

    for(int i=0;i<size;i++){
        if(abs(arr[i]) - 1 < size && arr[abs(arr[i]) - 1] > 0) {
            arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
            
            cout<<"After: "<<i<<endl;
            for(int j=0;j<size;j++)
                cout<<arr[j]<<" ";
            cout<<endl;
        }
    }
    for (int i=0;i<size;i++){
        if(arr[i]>0)
            return i+1;
    }
}

int main() {
	//code
	int choice;
	cin>>choice;
	
	while(choice){
	    int size;
	    cin>>size;
	    
	    int arr[size];
	    for(int i=0;i<size;i++){
	        cin>>arr[i];
	    }
	    int place;
	    place=remove(arr,size);
	    //cout<<"PLce"<<place<<endl;
	    

	    cout<<missing(arr+place,size-place)<<endl;
	    
	    
	    choice--;
	}
	return 0;
}