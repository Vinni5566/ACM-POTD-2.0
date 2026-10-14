# 🚀 POTD Challenge - Day 14

## 🧩 Problem: Next Round

- **Difficulty:** 800 Rating

---

## 📌 Problem

Given the scores of `n` contestants and an integer `k`, determine how many contestants advance to the next round.

A contestant advances if their score is **positive** and **greater than or equal to the score of the contestant in the `k`-th position**.

### Example

**Input:**
```text
8 5
10 9 8 7 7 7 5 5
```

**Output:**
```text
6
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
#include <vector>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> scores(n);

    for(int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int res = 0;

    for(int i = 0; i < n; i++) {
        if(scores[i] > 0 && scores[i] >= scores[k-1]) res++;
    }

    cout << res << endl;

    return 0;
}
```

---

## 📸 Acceptance Screenshot

![Codeforces Accepted Submission](../screenshots/Beginner/day14-accepted.png)