#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin>>s;

    bool allUpper = true;

    for(char c : s) {
        if(islower(c)) {
            allUpper = false;
            break;
        }
    }

    bool allLower = true;

    for(char c : s) {
        if(isupper(c)) {
            allLower = false;
            break;
        }
    }

    if(allUpper || allLower) {
        cout<<0<<endl;
        return 0;
    }

    bool foundLower = false;
    bool foundUpper = false;
    int upper = 0;
    int lower = 0;

    for(char c : s) {
        if(islower(c)) foundLower = true;
        if(isupper(c)) foundUpper = true;
        if(foundLower == true && isupper(c)) upper++;
        if(foundUpper && islower(c)) lower++;
    }

    if(upper == 0) cout<<lower;
    else if(lower == 0) cout<<upper;
    else cout<<min(upper, lower)<<endl;

    return 0;
}