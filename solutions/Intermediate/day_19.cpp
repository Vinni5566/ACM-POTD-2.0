#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    if(n % 7 == 0) {

        while(n > 0) {
            cout<<7;
            n /= 7;
        }

        return 0;
    }

    else if(n % 4 == 0) {

        while(n > 0) {
            cout<<4;
            n /= 4;
        }

        return 0;
    }

    else {
        int sum7 = 7;
        int sum4 = n-7;

        while((sum4 > 0 && sum7 > 0) && !(sum7%7 == 0 && sum4 % 4 == 0)) {
            sum7 += 7;
            sum4 -= 7;
        }

        if(sum7 > 0 && sum4 > 0 && sum7 % 7 == 0 && sum4 % 4 == 0) {

            while(sum4 > 1) {
                cout<<4;
                sum4 /= 4;
            }

            while(sum7 > 1) {
                cout<<7;
                sum7 /= 7;
            }

            return 0;
        } else {
            cout<<-1;
        }
    }

    return 0;
}