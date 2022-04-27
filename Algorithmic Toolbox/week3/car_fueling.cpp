#include <iostream>
#include <vector>

using namespace std;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
    // write your code here
    int Count = 0,i=0,pos=-2,current=0;
    stops.push_back(dist);
    while (true)
    {
        if (tank + current >= dist)
           return Count;


        if (tank < (stops[i] - current)){
            pos = i - 1;
            if (current == stops[pos])
                return -1;

            Count++;
            current = stops[i - 1];
            i--;
            continue;
        }
        i++;
    }
    return -1;
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
