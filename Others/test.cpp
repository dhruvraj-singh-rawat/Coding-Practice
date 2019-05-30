#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int input;
	
	set<int> s;
	for(int i=0;i<4;i++){
		cin>>input;
		s.insert(input);

	}
	vector<int> arr;
	arr.assign(s.begin(),s.end());
	for (int i=0;i<arr.size();i++) cout<<arr[i]<<endl;
	//for(auto it=s.begin();it!=s.end();it++) cout<<*it<<endl;




}