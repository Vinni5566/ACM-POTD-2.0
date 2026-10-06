#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin>>n;

    while(n % 10 == 0) {
        n /= 10;
    }

    string numStr = to_string(n);

    string reversedStr = numStr;
    reverse(reversedStr.begin(), reversedStr.end());

    if(numStr == reversedStr) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }

    return 0;
}