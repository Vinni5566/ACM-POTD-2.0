
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            cout<<(abs(n / 2 - i) <= j && j < n - abs(n / 2 - i) ? 'D' : '*');
        cout<<endl;
    }

    return 0;
}
