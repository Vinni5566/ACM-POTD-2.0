#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int maxl = 0;
    int currl = 1;

    for(int i = 1; i < n; i++) {

        if(a[i] > a[i-1]) {
            currl++;
        } else {
            maxl = max(maxl, currl);
            currl = 1;
        }
    }
    maxl = max(maxl, currl);
    cout<<maxl<<endl;

    return 0;
}