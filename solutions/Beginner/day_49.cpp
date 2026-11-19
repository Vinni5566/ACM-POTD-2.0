#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int getAllPrimes(int n) {

    int cnt = 0;

    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && isPrime(i)) {
            cnt++;
        }
    }

    return cnt;
}

int main() {

    int n;
    cin>>n;

    int res = 0;

    for(int i = 1; i <= n; i++) {
        if(getAllPrimes(i) == 2) {
            res++;
        }
    }

    cout<<res<<endl;

    return 0;
}