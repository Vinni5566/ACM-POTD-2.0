#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int idx;
    cin>>idx;

    for(int i = 1; i <= 3; i++) {

        int idx1, idx2;
        cin>>idx1>>idx2;

        if(idx == idx1) {
            idx = idx2;
        } else if(idx == idx2) {
            idx = idx1;
        }
    }

    cout<<idx<<endl;

    return 0;
}