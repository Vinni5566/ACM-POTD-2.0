# 🚀 POTD Challenge - Day 13

## 🧩 Problem: Shell Game

- **Difficulty:** 1000 Rating

---

## 📌 Problem

A ball is hidden under one of three cups numbered from 1 to 3. The cups are shuffled exactly three times, with each shuffle swapping two cups.

Given the ball's initial cup and the three swaps, determine the cup containing the ball after all the shuffles.

### Example

**Input:**
```text
1
1 2
2 1
2 1
```

**Output:**
```text
2
```

---

## ⏱️ Time Complexity

**O(1)**

---

## 💾 Space Complexity

**O(1)**

---

## 💻 Solution

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int idx;
    cin >> idx;

    for(int i = 1; i <= 3; i++) {

        int idx1, idx2;
        cin >> idx1 >> idx2;

        if(idx == idx1) {
            idx = idx2;
        } else if(idx == idx2) {
            idx = idx1;
        }
    }

    cout << idx << endl;

    return 0;
}
```

---

## 📸 Acceptance Screenshot

![Codeforces Accepted Submission](../screenshots/Intermediate/day13-accepted.png)