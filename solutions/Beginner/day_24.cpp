#include <bits/stdc++.h>
using namespace std;

int main() {

    string password;
    cin>>password;

    if(password.length() < 5) {
        cout<<"Too weak"<<endl;
        return 0;
    }

    bool upper = false;
    bool lower = false;
    bool digit = false;

    for(char c : password) {
        if(isupper(c)) {
            upper = true;
        } else if(islower(c)) {
            lower = true;
        } else if(isdigit(c)) {
            digit = true;
        }
    }

    if(upper && lower && digit) cout<<"Correct"<<endl;
    else cout<<"Too weak"<<endl;

    return 0;

}