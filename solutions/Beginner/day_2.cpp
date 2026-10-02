#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n, m;
    cin>>n>>m;

    vector<vector<char>> flag(n, vector<char>(m));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin>>flag[i][j];

            if(j > 0 && flag[i][j] != flag[i][j-1]) {
                cout<<"NO"<<endl;
                return 0;
            }
        }

        for(int j = 0; j < m; j++) {
            if(i > 0 && flag[i][j] == flag[i-1][j]) {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }

    cout<<"YES"<<endl;
    return 0;

}