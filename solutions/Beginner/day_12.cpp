#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

int main() {

    string s;
    cin>>s;

    int lowerCase = 0;
    int upperCase = 0;

    for(char c : s) {

        if(isupper(c)) {
            upperCase++;
        } else {
            lowerCase++;
        }
    }

    if(upperCase <= lowerCase) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }

    cout<<s<<endl;

    return 0;
}