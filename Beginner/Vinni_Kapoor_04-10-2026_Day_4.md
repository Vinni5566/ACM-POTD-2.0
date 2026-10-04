# 🚀 POTD Challenge - Day 4

## 🧩 Problem: Reconnaissance

- **Difficulty:** 800 Rating

---

## 📌 Problem

Given `n` soldiers and their heights, count the number of ways to form a reconnaissance unit of exactly two soldiers such that their height difference is at most `d`.

The pairs `(i, j)` and `(j, i)` are considered different.

### Example

**Input:**
```text
5 10
10 20 50 60 65
```

**Output:**
```text
6
```

---

## ⏱️ Time Complexity

**O(n²)**

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

    int n, d;
    cin>>n>>d;

    vector<int> heights(n);

    for(int i = 0; i < n; i++) {
        cin>>heights[i];
    }

    long long ways = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(abs(heights[i] - heights[j]) <= d) {
                ways+=2;
            }
        }
    }
    
    cout<<ways<<endl;

    return 0;
}
```

---

## 📸 Acceptance Screenshot

![Codeforces Accepted Submission](../screenshots/Beginner/day4-accepted.png)
