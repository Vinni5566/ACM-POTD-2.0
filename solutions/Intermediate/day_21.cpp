#include <iostream>
using namespace std;


int main() {

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string door;
    int rail;

    cin>>door;
    cin>>rail;

    if(door == "front") {
        if(rail == 1) cout<<"L";
        else cout<<"R";
    } else {
        if(rail == 1) cout<<"R";
        else cout<<"L";
    }

    return 0;
}