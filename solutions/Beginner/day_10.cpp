#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string str;
    getline(cin, str);

    int n = str.length();

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    int idx = n-2;

    while(!isalpha(str[idx])) {
        idx--;
    }

    if(str[idx] == 'a' || str[idx] == 'e' || str[idx] == 'i' || str[idx] == 'o' || str[idx] == 'u' || str[idx] == 'y') {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}