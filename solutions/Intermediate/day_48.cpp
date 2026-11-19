#include <bits/stdc++.h>
using namespace std;

int main() {

    string r, k;
    cin>>r>>k;

    int r_x = r[0] - 'a'+1;
    int r_y = r[1] - '0';

    int k_x = k[0] - 'a'+1;
    int k_y = k[1] - '0';

    vector<pair<int, int>> k_moves = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};

    vector<vector<int>> board(9, vector<int>(9, 0));
    board[k_x][k_y] = 1;

    for (const auto& move : k_moves) {
        int new_x = k_x + move.first;
        int new_y = k_y + move.second;

        if (new_x >= 1 && new_x <= 8 && new_y >= 1 && new_y <= 8) {
            board[new_x][new_y] = 1;
        }
    }

    for(int i = 1; i <= 8; i++) {
        board[r_x][i] = 1;
    }

    for(int i = 1; i <= 8; i++) {
        board[i][r_y] = 1;
    }

    for(auto & moves : k_moves) {
        int new_x = r_x + moves.first;
        int new_y = r_y + moves.second;

        if (new_x >= 1 && new_x <= 8 && new_y >= 1 && new_y <= 8) {
            board[new_x][new_y] = 1;
        }
    }

    int free = 64;

    for(int i = 1; i <= 8; i++) {
        for(int j = 1; j <= 8; j++) {
            if(board[i][j] == 1) {
                free--;
            }
        }
    }

    cout<<free<<endl;

    return 0;
}