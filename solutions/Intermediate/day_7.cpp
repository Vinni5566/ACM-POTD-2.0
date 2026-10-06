#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {

    int n, m;
    cin>>n>>m;

    vector<int> firstList(n);
    vector<int> secondList(m);

    for(int i=0;i<n;i++){
        cin>>firstList[i];
    }

    for(int i=0;i<m;i++){
        cin>>secondList[i];
    }

    vector<int> common(10);

    for(int i = 0; i < n; i++) {
        common[firstList[i]]++;
    }

    for(int i = 0; i < m; i++) {
        common[secondList[i]]++;
    }

    int smallestPrettyInteger = INT_MAX;

    for(int i = 0; i < 10; i++) {
        if(common[i] == 2) {
            smallestPrettyInteger = i;
            break;
        }
    }

    sort(firstList.begin(), firstList.end());
    sort(secondList.begin(), secondList.end());

    if(firstList[0] == secondList[0]) {
        smallestPrettyInteger = min(firstList[0], smallestPrettyInteger);
    } else {
        
        int currSmall = min(firstList[0], secondList[0]) * 10 + max(firstList[0], secondList[0]);

        smallestPrettyInteger = min(currSmall, smallestPrettyInteger);
    }

    cout<<smallestPrettyInteger;

    return 0;
}