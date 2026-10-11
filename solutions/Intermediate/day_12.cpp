#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {

    int n;
    cin>>n;

    vector<vector<int>> notes(n, vector<int>(2));

    set<pair<int, int>> camels;

    for(int i = 0; i < n; i++) {
        cin>>notes[i][0];
        cin>>notes[i][1];

        camels.insert({notes[i][0], i});
    }

    for(int i = 0; i < n-1; i++) {

        int target = notes[i][0]+notes[i][1];

        auto it = camels.lower_bound({target, 0});
        
        if (it != camels.end() && it->first == target) {
            
            int targetIndex = it->second;

            if(notes[targetIndex][0] + notes[targetIndex][1] == notes[i][0]) {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        
    }

    cout<<"NO"<<endl;

    return 0;
}