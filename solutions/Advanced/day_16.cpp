#include <iostream>
#include <vector>
using namespace std;

int main() {

    string home, away;
    cin>>home>>away;

    int n;
    cin>>n;

    vector<int> yellow_h(100);
    vector<int> yellow_a(100);
    vector<int> red_h(100);
    vector<int> red_a(100);

    while(n--) {

        int minute;
        char team;
        int player;
        char card;

        cin>>minute;
        cin>>team;
        cin>>player;
        cin>>card;

        if(card == 'r') {
            if(team == 'h') red_h[player]++;
            else red_a[player]++;
        }

        if(card == 'y') {
            if(team == 'h') yellow_h[player]++;
            else yellow_a[player]++;
        }

        if(card == 'r') {
            if(team == 'h' && red_h[player] == 1) cout<<home<<" "<<player<<" "<<minute<<endl;
            else if(team == 'a' && red_a[player] == 1) cout<<away<<" "<<player<<" "<<minute<<endl;
        } 
        
        else if(card == 'y') {
            if(team == 'h' && red_h[player] == 0 && yellow_h[player] == 2) cout<<home<<" "<<player<<" "<<minute<<endl;
            else if(team == 'a' && red_a[player] == 0 && yellow_a[player] == 2) cout<<away<<" "<<player<<" "<<minute<<endl;
        }

    }

    return 0;
}