#include <iostream>
using namespace std;

int main() {

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if(x1 != x2 && y1 != y2) {
        int diffX = abs(x1 - x2);
        int diffY = abs(y1 - y2);

        if(diffX != diffY) {
            cout << -1;
            return 0;
        }
    } 

    int l = max(abs(x1 - x2), abs(y1 - y2));

    int x3, y3, x4, y4;

    if(x1 == x2) {
        x3 = x1 + l;
        y3 = y1;

        x4 = x2 + l;
        y4 = y2;
    } else if(y1 == y2) {
        x3 = x1;
        y3 = y1 + l;

        x4 = x2;
        y4 = y2 + l;
    } else {
        if(x1 < x2 && y1 < y2) {
            x3 = x1;
            y3 = y2;

            x4 = x2;
            y4 = y1;
        } else if(x1 < x2 && y1 > y2) {
            x3 = x1;
            y3 = y2;

            x4 = x2;
            y4 = y1;
        } else if(x1 > x2 && y1 < y2) {
            x3 = x2;
            y3 = y1;

            x4 = x1;
            y4 = y2;
        } else {
            x3 = x2;
            y3 = y1;

            x4 = x1;
            y4 = y2;
        }
    }

    if(1000 < x3 || x3 < -1000 || 1000 < y3 || y3 < -1000 || 1000 < x4 || x4 < -1000 || 1000 < y4 || y4 < -1000) {
        cout << -1;
        return 0;
    }

    cout << x3 << " " << y3 << " " << x4 << " " << y4;

    return 0;


}