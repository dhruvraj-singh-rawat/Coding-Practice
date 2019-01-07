#include <iostream>
#include <cassert>

using namespace std;

int fibonacci_naive(int n) {
    if (n <= 1)
        return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

int fibonacci_fast(int n) {
    // write your code here
    
    int F,F1=1,F2=0;
    if(n<2){
        return n;
    }
    else{
     

        for (int i=2;i<=n;i++){
            
            F=F1+F2;
            F2=F1;
            F1=F;
        }
    }

    return F;
}




int main() {
    int n = 0;
    cin >> n;

    //std::cout << fibonacci_naive(n) << '\n';
    //test_solution();
    cout << fibonacci_fast(n) << '\n';
    
    return 0;
}
