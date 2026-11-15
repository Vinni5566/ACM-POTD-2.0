#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {

    int n, b;
    cin>>n>>b;

    vector<int> prices(n);

    for(int i = 0; i < n; i++) {
        cin>>prices[i];
    }

    int low = INT_MAX;
    int high = 0;
    int diff = INT_MIN;

    for(int i = 0; i < n; i++) {

        int d = prices[i] - low;

        if(low > prices[i]) {
            low = prices[i];
        } else if(d  > diff) {
            diff = d;
        }
    }

    int dollar = b / low;

    cout<<((diff-low)*dollar - (low*dollar)) + (b%low)<<endl;

    return 0;
}