#include <iostream>
using namespace std;

int main() {

    long long n;
    cin>>n;

    long long maxDaysOff = 0;
    long long minDaysOff = 0;

    if(n <= 5) {
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
        minDaysOff = n / 7 * 2;
        maxDaysOff = (n / 7) * 2;

        if(n%7 == 2 || n%7 == 3 || n%7 == 4 || n%7 == 5) {
            maxDaysOff+=2;;
        } else if(n%7 == 1) {
            maxDaysOff+=1;
        } else if(n%7 == 6) {
            maxDaysOff+=3;
        }
    }

    cout << minDaysOff << " " << maxDaysOff << endl;

    return 0;
}