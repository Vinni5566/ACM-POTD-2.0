#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
    return a.length() < b.length();
}

int main() {

    string s;
    cin>>s;

    int n;
    cin>>n;

    string res;
    int n;

    for(int i = 0; i < n; i++) {
        cin>>addresses[i];
    }

    sort(addresses.begin(), addresses.end(), cmp);

    for(int i = 0; i < n; i++) {
        if (addresses[i].compare(0, s.size(), s) == 0) {
            cout<<addresses[i]<<endl;
            return 0;
        }
    }

    cout<<s<<endl;
    return 0;

}