#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int counter = 1;

    while (n > 0) {
        n -= counter;

        if (n == 0) {
            cout << "YES" << endl;
            return 0;
        }

        counter++;
    }

    cout << "NO" << endl;
    return 0;
}