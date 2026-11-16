#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            if(i == n) cout<<" I love ";
            else cout<<" I love that" ;
        } else {
            if(i == 1) {
                if(i == n)cout<<"I hate ";
                else cout<<"I hate that";
            }
            else if(i == n) cout<<" I hate ";
            else cout<<" I hate that";
        }
    }

    cout<<"it"<<endl;

    return 0;
}