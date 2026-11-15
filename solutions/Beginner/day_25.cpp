#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, a, b;
    cin>>n>>a>>b;

    set<int> a_apples;
    set<int> b_apples;

    for(int i = 0; i < a; i++) {
        int apple;
        cin>>apple;

        a_apples.insert(apple);
    }

    for(int i = 0; i < b; i++) {
        int apple;
        cin>>apple;

        b_apples.insert(apple);
    }

    for(int i = 1; i <= n; i++) {
        if(a_apples.find(i) != a_apples.end()) cout<<1<<" ";
        else cout<<2<<" ";
    }

    return 0;
}