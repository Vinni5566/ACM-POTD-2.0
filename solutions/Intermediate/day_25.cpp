#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    int start = 1;
    int end = n*n;

    for(int i = 1; i <= n; i++) {

        if(start > end) break;

        for(int j = 1; j <= n/2; j++) {
            cout<<start<<" ";
            start++;
        }

        for(int j = 1; j <= n/2; j++) {
            cout<<end<<" ";
            end--;
        }

        cout<<endl;
    }

    return 0;
}