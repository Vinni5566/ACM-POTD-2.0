#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    int inches = n/3;

    int mod = n%3;

    inches += mod/2;
    int a, b;

    a = inches/12;
    b = inches%12;

    cout<<a<<" "<<b;

    return 0;


}