#include <bits/stdc++.h>
using namespace std;

bool canFormTraingle(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

bool canFormDegenerateTriangle(int a, int b, int c) {
    return (a + b == c) || (a + c == b) || (b + c == a);
}

int main() {
    
    int a[4];

    for(int i=0; i<4; i++){
        cin>>a[i];
    }

    if(canFormTraingle(a[0], a[1], a[2]) || canFormTraingle(a[0], a[1], a[3]) || canFormTraingle(a[0], a[2], a[3]) || canFormTraingle(a[1], a[2], a[3])) {
        cout<<"TRIANGLE"<<endl;
    } else if(canFormDegenerateTriangle(a[0], a[1], a[2]) || canFormDegenerateTriangle(a[0], a[1], a[3]) || canFormDegenerateTriangle(a[0], a[2], a[3]) || canFormDegenerateTriangle(a[1], a[2], a[3])) {
        cout<<"SEGMENT"<<endl;
    } else {
        cout<<"IMPOSSIBLE"<<endl;
    }

    return 0;


}
