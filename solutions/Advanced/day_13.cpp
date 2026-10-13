#include <iostream>
#include <set>
using namespace std;

int main() {

    int n, d;
    cin>>n>>d;

    set<int> points;

    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;

        points.insert(x);
    }

    int res = 0;

    for(int x : points) {

        int diff = abs(x - d);

        if (points.find(diff) != points.end()) {
            res++;
        }

        if(points.find(-diff) != points.end()) {
            res++;
        }
    }

    cout<<res<<endl;

    return 0;
}

