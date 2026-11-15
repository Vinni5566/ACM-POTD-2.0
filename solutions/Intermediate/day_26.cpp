#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,m;
    char color;
    cin>>n>>m>>color;

    vector<vector<int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    vector<vector<char>> officeRoom(n, vector<char>(m));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin>>officeRoom[i][j];
        }
    }

    set<char> deputies;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {

            if(officeRoom[i][j] == color) {

                for(vector<int> d : dir) {
                    int x = d[0];
                    int y = d[1];

                    int nx = x+i;
                    int ny = y+j;

                    if(nx >= 0 && nx < n && ny >= 0 && ny < m && officeRoom[nx][ny] != color && officeRoom[nx][ny] != '.') {
                        deputies.insert(officeRoom[nx][ny]);
                    }
                }
            }
        }
    }

    cout<<deputies.size()<<endl;

    return 0;
}