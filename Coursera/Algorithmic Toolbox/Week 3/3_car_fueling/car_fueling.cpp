#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
    // write your code here
    
    if(dist<=tank) return 0;

    int can_travel = tank , count = 0;
    int loc_current=-1 , loc_next = -1;
    // Outer Loop
    for(int i=0;i<stops.size();i++){
        //cout<<"Current Can_Travel: "<<can_travel<<"\n";

        if(can_travel == stops[stops.size()-1] && stops[stops.size()-1] == dist ) return count+1;
        else if(can_travel > dist) return count;

        
        // Iterating all the steps
        for (int j=0;j<stops.size();j++){

            if(can_travel >= stops[j] ){
                loc_next = j;
            }
        }
        if(loc_current == loc_next) return -1;

        loc_current = loc_next;
        can_travel = tank + stops[loc_current];
        count++;


    }
    return count;
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
