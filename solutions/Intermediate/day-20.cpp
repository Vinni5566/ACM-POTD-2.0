#include <iostream>
#include <cctype>
using namespace std;

int main() {

    string s;
    cin>>s;

    string res = "";

    for(int i = 0; i < s.length(); i++) {

        char c = s[i];

        if(c == 'a' || c == 'A' || c == 'o' || c == 'O' || c == 'y' || c == 'Y' || c == 'e' || c == 'E' || c == 'u' || c == 'U' || c == 'i' || c == 'I') continue;
        else {
            res += '.';
            res += tolower(c);
        }
    }

    cout<<res<<endl;

    return 0;
}