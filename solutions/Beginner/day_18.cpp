#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    string s;
    cin>>s;

    int res = 0;

    int i = 0;
    int j = 1;

    while(i < n && j < n) {

        if(s[j] == s[i]) {
            res++;
            j++;
        } else {
            i = j;
            j = i+1;
        }
    }

    cout<<res<<endl;

    return 0;
}