#include <iostream>
using namespace std;

int main() {

    string s;
    cin>>s;

    string t = "hello";

    int j = 0;
    int i = 0;

    while(i < s.length()) {

        if(j == t.length()) {
            cout<<"YES"<<endl;
            return 0;
        }

        if(s[i] == t[j]) j++;
        i++;
    }

    if(j == t.length()) {
        cout<<"YES"<<endl;
        return 0;
    }

    cout<<"NO"<<endl;

    return 0;
}