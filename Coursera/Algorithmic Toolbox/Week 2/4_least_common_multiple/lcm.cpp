#include <iostream>


long lcm_naive(int a, int b) {
  int new_a=a,new_b=b;
  long long product=1;

  for (int i=2;i<=b && new_a>i && new_b>>i;i++){
    if(new_a%i==0 && new_b%i==0){
      new_a=new_a/i;
      new_b=new_b/i;
      product=product*i;
    }
  }
  return (long) new_a * new_b*product;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm_naive(a, b) << std::endl;
  return 0;
}
