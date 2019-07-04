#include<iostream>

using namespace std;
int main() {
    int i, j=2;

    for(i=0; (j>=0 && i<=5); i++)
    {
        cout<<" "<<i+j;
        
         j--;
    }
    return 0;
}