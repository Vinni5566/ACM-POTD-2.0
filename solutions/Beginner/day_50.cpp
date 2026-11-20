#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin>>n>>m;

    vector<int> neg;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x<0){
            neg.push_back(x);
        }
    }

    sort(neg.begin(), neg.end());

    int maxEarnedMoney = 0;

    int idx = 0;

    while(m > 0 && idx < neg.size()) {
        maxEarnedMoney += abs(neg[idx]);
        idx++;
        m--;
    }

    cout<<maxEarnedMoney<<endl;

    return 0;
}