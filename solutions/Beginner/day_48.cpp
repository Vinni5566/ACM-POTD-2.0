#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin>>n>>m;

    vector<pair<int,int>> containers(m);

    for(int i=0; i<m; i++){
        cin>>containers[i].first>>containers[i].second;
    }

    sort(containers.begin(), containers.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
        return a.second > b.second;
    });

    int maxMatches = 0;

    for(int i = 0; i < m; i++){
        if(n >= containers[i].first){
            maxMatches += (containers[i].first * containers[i].second);
            n -= containers[i].first;
        } else {
            maxMatches += (n * containers[i].second);
            break;
        }
    }

    cout<<maxMatches<<endl;

    return 0;
}