#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    set<string> leaves;

    for(int i = 0; i < n; i++) {
        string s, c;
        cin>>s>>c;
        leaves.insert(s+" "+c);
    }

    cout<<leaves.size()<<endl;

    return 0;
}