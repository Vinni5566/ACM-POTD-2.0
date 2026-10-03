#include <iostream>
using namespace std;

long long calculateSum(long long n) {
    
    long long totalSum = 1LL * n * (n + 1) / 2;;

    long long lastPower = 1;

    while(lastPower <= n) {
        lastPower *= 2;
    }

    lastPower /= 2;

    long long sumOfAllPowersOf2 = 2*lastPower - 1;

    long long finalSum = totalSum - (2*sumOfAllPowersOf2);

    return finalSum;

}

int main() {

    int t;
    cin>>t;

    long long sum = 0;

    for(int i = 0; i < t; i++) {
        long long x;
        cin>>x;

        cout<<calculateSum(x)<<endl;
    }

    return 0;
}