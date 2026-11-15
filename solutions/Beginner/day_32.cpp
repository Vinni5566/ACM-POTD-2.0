#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    for(int i = 2; i*i < n; i++) {
        if(n%i == 0) return false;
    }

    return true;
}

int main() {

    int n;
    cin>>n;

    for(int i = 1; i <= n/2; i++) {
        if(!isPrime(i) && !isPrime(n-i)) {
            cout<<i<<" "<<n-i<<endl;
            return 0;
        }
    }
    
    return 0;
}