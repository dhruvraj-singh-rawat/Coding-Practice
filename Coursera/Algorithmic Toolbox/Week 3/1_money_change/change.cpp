#include <iostream>

int get_change(int m) {
  //write your code here
	int coins[3]={1,5,10};
	int count=0;
	int chosen;

	while(m!=0){

		for(int i=0;i<3;i++){
			if(coins[i]<=m){
				chosen=coins[i];
			}
		}

		m=m-chosen;
		count++;


	}
  return count;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
