
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;

    vector<int> p(n);

    for(int i = 0; i < n; i++) {
        cin>>p[i];
    }

    int winner = 0;

    for(int i = 1; i < n; i++) {
        if(p[i] > p[winner]) {
            winner = i;
        }
    }

    int secondHighest = 0;
    
    for(int i = 0; i < n; i++) {
        if(i != winner) {
            secondHighest = max(secondHighest, p[i]);
        }
    }

    cout<<winner + 1<<" "<<secondHighest<<endl;

    return 0;
}
