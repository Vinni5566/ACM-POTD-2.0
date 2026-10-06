#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

    int n;
    cin>>n;

    if(n <= 9) {
        cout<<1;
        return 0;
    }

    string numStr = to_string(n);
    int l = numStr.length();

    int divisor = pow(10, l-1);

    int r = n % divisor;

    int nextMultipleOf10 = (n-r) + (pow(10, l-1));

    cout<<nextMultipleOf10 - n;

    return 0;

}