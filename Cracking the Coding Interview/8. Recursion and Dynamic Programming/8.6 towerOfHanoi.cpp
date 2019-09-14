#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void towerHanoi(int platesRemaining , array<stack <int> , 3> &pegs, int from_peg,int to_peg,int using_peg);

void makeHanoi(int NumOfElemets){

    array<stack <int> ,3> pegs;

    for(int i=NumOfElemets;i>0;i--){
        pegs[0].push(i);
    }

    towerHanoi(NumOfElemets,pegs,0,1,2);

}

void towerHanoi(int platesRemaining , array<stack <int> , 3> &pegs, int from_peg,int to_peg,int using_peg){

    if(platesRemaining>0){
        towerHanoi(platesRemaining-1,pegs,from_peg,using_peg,to_peg);
        
        pegs[to_peg].push(pegs[from_peg].top());

        int poped = pegs[from_peg].top();
        pegs[from_peg].pop();
        cout<<"Moved " << poped<<" from "<<from_peg << " to the "<<to_peg<<endl;

        towerHanoi(platesRemaining-1,pegs,using_peg,to_peg,from_peg);
    }
}

int main(){

    makeHanoi(3);
    return 0;
}


