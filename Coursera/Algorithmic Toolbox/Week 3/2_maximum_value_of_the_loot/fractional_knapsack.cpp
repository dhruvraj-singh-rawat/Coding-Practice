#include <iostream>
#include <vector>

using std::vector;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;

  // write your code here
  
  for(int i=0;i<weights.size();i++){

    if(capacity==0){
      return value;
    }
    else{
      // Finding Highest Ratio
      double ratio=0.00;
      int i_loc;
      for(int i=0;i<weights.size();i++){
        if( (weights[i]!=0 ) &&  ( (double) values[i] / weights[i] > ratio) ){
          double val = values[i] , wei = weights[i];
          ratio=val/wei; i_loc = i;
        }        
      }
      // Finding Minimum of Weight and Capacity
      double a;
      if(weights[i_loc]<capacity){
        a= weights[i_loc];
      }
      else{
        a = capacity;
      }
      value = value + ratio * a ;
      capacity = capacity - a;
      weights[i_loc] = weights[i_loc] - a;

      
    }    
  }
  return value;
}

int main() {
    int n;
    int capacity;
    std::cin >> n >> capacity;
    vector<int> values(n);
    vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        std::cin >> values[i] >> weights[i];
    }

    double optimal_value = get_optimal_value(capacity, weights, values);

    std::cout.precision(10);
    std::cout << optimal_value << std::endl;
    return 0;
}
