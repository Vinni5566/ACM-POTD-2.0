#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    string s;
    cin>>s;

    int a_cnt = 0;
    int d_cnt = 0;

    for(char c : s) {
        if(c == 'A') a_cnt++;
        else d_cnt++;
    }

    if(a_cnt > d_cnt) {
        cout<<"Anton"<<endl;
    } else if(d_cnt > a_cnt) {
        cout<<"Danik"<<endl;
    } else {
        cout<<"Friendship"<<endl;
    }

    return 0;
}