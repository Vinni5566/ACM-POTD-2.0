#include <bits/stdc++.h>
using namespace std;

int main() {

    string r1, r2,r3;
    cin >> r1 >> r2 >> r3;

    if(r1[1] == '<') {
        reverse(r1.begin(), r1.end());
    }

    if(r2[1] == '<') {
        reverse(r2.begin(), r2.end());
    }

    if(r3[1] == '<') {
        reverse(r3.begin(), r3.end());
    }

    int a = 0, b = 0, c = 0;

    if(r1[0] == 'A') {
        a++;
    } else if(r1[0] == 'B') {
        b++;
    } else {
        c++;
    }

    if(r2[0] == 'A') {
        a++;
    } else if(r2[0] == 'B') {
        b++;
    } else {
        c++;
    }

    if(r3[0] == 'A') {
        a++;
    } else if(r3[0] == 'B') {
        b++;
    } else {
        c++;
    }

    if(a == b || b == c || a == c) {
        cout<<"Impossible"<<endl;
    } else if(a == 2 &&b == 1) {
        cout<<"CBA"<<endl;
    } else if(a == 1 && b == 2) {
        cout<<"CAB"<<endl;
    } else if(a == 2 && c == 1) {
        cout<<"BCA"<<endl;
    } else if(a == 1 && c == 2) {
        cout<<"BAC"<<endl;
    } else if(b == 2 && c == 1) {
        cout<<"ACB"<<endl;
    } else if(b == 1 && c == 2) {
        cout<<"ABC"<<endl;
    }

    return 0;

}