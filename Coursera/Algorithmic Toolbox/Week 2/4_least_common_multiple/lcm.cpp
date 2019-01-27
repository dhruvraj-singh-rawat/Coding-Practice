#include <iostream>


long long lcm_naive(int a, int b) {
  int new_a=a,new_b=b;
  long long product=1;

  for (int i=2;i<=b && new_a>=i && new_b>=i;i++){
    if(new_a%i==0 && new_b%i==0){
      new_a=new_a/i;
      new_b=new_b/i;
      product=product*i;
      //std::cout<<product<<"\n";
    }
  }
  return (long long ) new_a * new_b*product;
}

long long gcd(int a , int b){
  if(b==0){
    return a;
  }
  else{
    gcd(b,a%b);
  }
}

long long lcm_fast(long long  a , long long b){
  return a*b/gcd(a,b);
}

int main() {
  long long a, b;
  std::cin >> a >> b;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}
