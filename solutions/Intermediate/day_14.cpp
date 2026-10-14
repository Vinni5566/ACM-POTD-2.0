#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {

    int n;
    cin>>n;

    vector<int> bars(n);

    for(int i = 0; i < n; i++) {
        cin>>bars[i];
    }

    unordered_map<int, int> mp;

    for(int bar : bars) {
        mp[bar]++;
    }

    int totalTowers = mp.size();

    int maxHeight = 0;

    for(auto & p : mp) {
        maxHeight = max(p.second, maxHeight);
    }

    cout<<maxHeight<<" "<<totalTowers<<endl;

    return 0;
}