#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {

    int n;
    cin>>n;

    vector<int> arr(n);

    int minDiff = INT_MAX;

    int idx1 = -1, idx2 = -1;

    for(int i=0; i<n; i++) {
        cin>>arr[i];

        if(i > 0) {
            int diff = abs(arr[i] - arr[i-1]);
            if(diff < minDiff) {
                minDiff = diff;
                idx1 = i-1;
                idx2 = i;
            }
        }
    }

    int diff = abs(arr[0] - arr[n-1]);

    if(diff < minDiff) {
        idx1 = n-1;
        idx2 = 0;
    }

    cout<<idx1+1<<" "<<idx2+1<<endl;

    return 0;
}