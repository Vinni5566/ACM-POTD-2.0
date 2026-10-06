# 🚀 POTD Challenge - Day 7

## 🧩 Problem: Army

- **Difficulty:** 800 Rating

---

## 📌 Problem

Given `n` army ranks, where moving from rank `i` to rank `i + 1` takes `di` years, find the total number of years required to rise from rank `a` to rank `b`.

### Example

**Input:**
```text
3
5 6
1 2
```

**Output:**
```text
5
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

    int n;
    cin>>n;

    vector<int> d(n-1);

    for(int i=0;i<n-1;i++){
        cin>>d[i];
    }

    int a, b;
    cin>>a>>b;

    int years = 0;

    for(int i = a-1; i <= b-2; i++) {
        years += d[i];
    }

    cout<<years;

    return 0;
}
```

---

## 📸 Acceptance Screenshot

![Codeforces Accepted Submission](../screenshots/Beginner/day7-accepted.png)