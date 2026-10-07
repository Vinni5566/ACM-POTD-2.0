#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin>>n;

    vector<int> a(n), b(n);

    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    for(int i=0; i<n; i++) {
        cin>>b[i];
    }

    sort(b.begin(), b.end());

    long long allRemainingCola = 0;

    for(int i = 0; i < n; i++) {
        allRemainingCola += a[i];
    }

    if(allRemainingCola <= (long long) (b[n-1] + b[n-2])) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;
}