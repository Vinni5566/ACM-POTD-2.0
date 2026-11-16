#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin>>s;

    vector<pair<int, int>> dir = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}, {1, 1}, {-1, -1}, {1, -1}, {-1, 1}};

    int x = s[0]-'a' + 1;
    int y = s[1]-'0';

    int cnt = 0;

    for(auto& d : dir) {
        int nx = x + d.first;
        int ny = y + d.second;

        if(nx >= 1 && nx <= 8 && ny >= 1 && ny <= 8) {
            cnt++;
        }
    }

    cout<<cnt<<endl;

    return 0;
}