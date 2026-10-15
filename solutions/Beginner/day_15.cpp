#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n, m;
    cin>>n>>m;

    vector<vector<int>> vertices;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            char c;
            cin>>c;

            if(c == '*') {
                vertices.push_back({i, j});
            }
        }
    }

    int x = 0, y = 0;

    if(vertices[0][0] == vertices[1][0]) {
        x = vertices[2][0];

        if(vertices[2][1] == vertices[0][1]) y = vertices[1][1];
        else y = vertices[0][1];
    }

    else if(vertices[1][0] == vertices[2][0]) {
        x = vertices[0][0];

        if(vertices[0][1] == vertices[1][1]) y = vertices[2][1];
        else y = vertices[1][1];
    }

    cout<<x+1<<" "<<y+1;

    return 0;
}