# 🚀 POTD Challenge - Day 15

## 🧩 Problem: Valuable Resources

- **Difficulty:** 1300 Rating

---

## 📌 Problem

Given `n` distinct points on a Cartesian plane representing mines, find the minimum area of a square whose sides are parallel to the coordinate axes and that contains all the points.

The square's side length must be at least the maximum of the horizontal and vertical distances between the extreme points.

### Example

**Input:**
```text
2
0 0
2 2
```

**Output:**
```text
4
```

---

## ⏱️ Time Complexity

**O(n)**

---

## 💾 Space Complexity

**O(1)**

---

## 💻 Solution

```cpp
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;

    int x_max = INT_MIN;
    int y_max = INT_MIN;
    int x_min = INT_MAX;
    int y_min = INT_MAX;

    for(int i = 0; i < n; i++) {

        int x, y;
        cin >> x >> y;

        x_max = max(x, x_max);
        x_min = min(x, x_min);
        y_max = max(y, y_max);
        y_min = min(y, y_min);
    }

    long long l = x_max - x_min;
    long long b = y_max - y_min;

    if(l != b) cout << max(l, b) * max(l, b) << endl;
    else cout << l * b << endl;

    return 0;
}
```

---

## 📸 Acceptance Screenshot

![Codeforces Accepted Submission](../screenshots/Advanced/day15-accepted.png)