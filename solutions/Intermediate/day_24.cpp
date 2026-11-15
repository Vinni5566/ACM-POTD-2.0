#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,m;
    cin>>n>>m;

    int cnt = 0;

    if(n > m) {

        for(int i = 1; i <= n; i++) {
            for(int j = i; j <= m; j++) {
                cnt++;
            }
        }
    } else if(n < m) {
        for(int i = 1; i <= m; i++) {
            for(int j = i; j <= n; j++) {
                cnt++;
            }
        }
    } else {
        for(int i = 1; i <= n; i++) {
            for(int j = i; j <= m; j++) {
                cnt++;
            }
        }
    }

    cout<<cnt<<endl;

    if(n > m) {

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                cout<<i<<" "<<j<<endl;
            }
        }
    } else if(n < m) {
        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
                cout<<j<<" "<<i<<endl;
            }
        }
    } else {
        for(int i = 1; i <= n; i++) {
            for(int j = i; j <= m; j++) {
                cout<<i<<" "<<j<<endl;
            }
        }
    }

    return 0;

}