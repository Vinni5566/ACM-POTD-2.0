# 🚀 POTD Challenge - Day 14

## 🧩 Problem: Towers

- **Difficulty:** 1000 Rating

---

## 📌 Problem

Given `n` wooden bars of different lengths, construct the minimum number of towers by stacking bars of equal length on top of one another.

Determine the **height of the tallest tower** and the **total number of towers** required to use all the bars.

### Example

**Input:**
```text
4
6 5 6 7
```

**Output:**
```text
2 3
```

---

## ⏱️ Time Complexity

**O(n)** 

---

## 💾 Space Complexity

**O(n)**

---

## 💻 Solution

```cpp
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> bars(n);

    for(int i = 0; i < n; i++) {
        cin >> bars[i];
    }

    unordered_map<int, int> mp;

    for(int bar : bars) {
        mp[bar]++;
    }

    int totalTowers = mp.size();

    int maxHeight = 0;

    for(auto & p : mp) {
        maxHeight = max(p.second, maxHeight);
    }

    cout << maxHeight << " " << totalTowers << endl;

    return 0;
}
```

---

## 📸 Acceptance Screenshot

![Codeforces Accepted Submission](../screenshots/Intermediate/day14-accepted.png)