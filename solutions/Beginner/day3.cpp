#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin>>n;

    int secondOrderStatistics = 101;
    int minimum = 100;

    vector<int> seq(n);

    for(int i = 0; i < n; i++) {
        cin>>seq[i];
    }

    for(int i = 0; i < n; i++) {
        if(seq[i] < minimum) {
            minimum = seq[i];
        }
    }

    for(int i = 0; i < n; i++) {
        if(seq[i] > minimum && seq[i] < secondOrderStatistics) {
            secondOrderStatistics = seq[i];
        }
    }

    if(secondOrderStatistics == 101) {
        cout<<"NO"<<endl;
    } else {
        cout<<secondOrderStatistics<<endl;
    }

    return 0;
}