#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
    // write your code here

    int current_pos=0,num_refills=0;

    if(dist<=tank) return 0;

    while((current_pos <= stops.size())){

        int last_pos=current_pos, last_val=stops[current_pos];
        std::cout<<"The current pos iS : "<<current_pos<<"\n";
        if(last_pos==0){
            last_val=0;
        }
        while(current_pos<=stops.size() && stops[current_pos] - last_val <= tank){
            current_pos++;
            std::cout<<"The current pos VALUE is : "<<stops[current_pos]<<"\n";
            
        }

        if(current_pos == last_pos) return -1;
        std::cout<<"The current pos is : "<<current_pos<<"\n";
        if(stops[current_pos]+tank>=dist) return num_refills;
        

        if(num_refills<= stops.size()) num_refills++;
    }
    
    if(stops[current_pos]+tank>=dist) return num_refills;
    else return -1;
    

    

}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
