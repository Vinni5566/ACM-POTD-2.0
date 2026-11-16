#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    vector<pair<int, int>> a(n);

    for(int i=0; i<n; i++){
        int x;
        cin>>x;

        a[i] = {x, i+1};
    }

    sort(a.begin(), a.end(), [](const pair<int, int>& x, const pair<int, int>& y) {
        if (x.first != y.first) {
            return x.first < y.first;
        }
        return x.second < y.second;
    });

    for(int i=0; i<n/2; i++){
        cout<<a[i].second<<" "<<a[n-i-1].second<<endl;
    }

    return 0;
}