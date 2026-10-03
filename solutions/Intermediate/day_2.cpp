#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {

    int n;
    cin>>n;

    vector<long long> odd;

    long long evenSum = 0;

    for(int i = 0; i < n; i++) {
        long long x;
        cin>>x;

        if(x%2 ==0) {
            evenSum += x;
        } else {
            odd.push_back(x);
        }
    }

    sort(odd.begin(), odd.end());

    long long sum = accumulate(odd.begin(), odd.end(), 0LL);

    if(odd.size() % 2 == 0) {
        evenSum += sum;
    } else {
        evenSum += (sum - odd[0]);
    }

    cout<<evenSum<<endl;

    return 0;
}
