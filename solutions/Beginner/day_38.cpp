#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin>>n>>m;

    set<int> bulbs;

    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;

        for(int i = 0; i < x; i++) {
            int y;
            cin>>y;
            bulbs.insert(y);
        }
    }

    if(bulbs.size() == m) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;
}