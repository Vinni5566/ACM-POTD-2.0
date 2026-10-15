#include <iostream>
#include <climits>
using namespace std;

int main() {

    int n;
    cin>>n;

    int x_max = INT_MIN;
    int y_max = INT_MIN;
    int x_min = INT_MAX;
    int y_min = INT_MAX;

    for(int i = 0; i < n; i++) {

        int x, y;
        cin>>x>>y;

        x_max = max(x, x_max);
        x_min = min(x, x_min);
        y_max = max(y, y_max);
        y_min = min(y, y_min);
    }

    long long l = x_max-x_min;
    long long b = y_max-y_min;

    if(l != b) cout<<max(l, b)*max(l, b)<<endl;
    else cout<<l*b<<endl;

    return 0;

}