#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, d;
    cin>>n>>d;

    int moves = 0;

    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];

        if(i != 0 && a[i] <= a[i-1]) {

            int diff = a[i-1] - a[i];
            int b = diff/d*d+d;
            moves += (b/d);
            a[i] += b;
        }
    }

    cout<<moves<<endl;

    return 0;
}