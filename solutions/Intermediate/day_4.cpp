#include <iostream>
using namespace std;

int main() {

    long long n;
    cin>>n;

    long long maxDaysOff = 0;
    long long minDaysOff = 0;

    if(n == 1) {
        minDaysOff = 0;
        maxDaysOff = 1;
    }
    
    else if(n <= 5) {
        minDaysOff = 0;
        maxDaysOff = 2;
    }

    else if(n == 6) {
        minDaysOff = 1;
        maxDaysOff = 2;
    }

    else if(n == 7) {
        minDaysOff = 2;
        maxDaysOff = 2;
    }
    
    else {
        minDaysOff = (n / 7) * 2;
        maxDaysOff = (n / 7) * 2;

        if(n%7 == 6) minDaysOff++;

        if(n%7 == 1) maxDaysOff++;
        else if(n%7 > 1) maxDaysOff+=2;
    }

    cout<<minDaysOff<<" "<<maxDaysOff<<endl;

    return 0;
}