#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,s;
    cin>>n>>s;

    vector<int> volumes(n);

    for(int i = 0; i < n; i++) {
        cin>>volumes[i];
    }

    sort(volumes.begin(), volumes.end());

    int totalVolume = 0;

    for(int i = 0 ; i < n-1; i++) {
        totalVolume += volumes[i];
    }

    if(totalVolume <= s) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}