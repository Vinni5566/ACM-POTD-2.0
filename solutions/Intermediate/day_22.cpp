#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin>>s;

    bool ok = true;

    for(int i = 1; i < s.size(); i++) {
        if (islower(s[i])) {
            ok = false;
            break;
        }
    }

    if(ok) {
        for(char &c : s) {
            if(islower(c)) c = toupper(c);
            else c = tolower(c);
        }
    }

    cout<<s<<endl;
    return 0;
}