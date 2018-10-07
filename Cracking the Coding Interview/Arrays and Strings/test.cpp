#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main(){
    /*
    int a;
    cin>>a;
    cout<<"\n";
    char ab;
    cin>>ab;
    cout<<"\n";
    string abc;
    abc.append(a);
    abc.append(ab);
    cout<<abc;*/
    stringstream ss;
    int a;
    cin>>a;
    string abc="hello world";
    string c;
    ss<<abc<<a;
    string abc1=ss.str();
    ss<<2;
    //abc1.append(ss.str());
    cout<<ss.str();
}