#include <iostream>
#include <set>
using namespace std;

int main() {

    int y;
    cin>>y;

    while(true) {

        y+=1;

        set<int> digits;

        int n = y;

        while(n > 0) {
            int r = n % 10;
            if(digits.find(r) != digits.end()) break;
            else digits.insert(r);

            n /= 10;
        }

        if(!(n > 0)) {
            cout<<y<<endl;
            return 0;
        }
    }

    return 0;
}