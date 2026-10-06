# 🚀 POTD Challenge - Day 6

## 🧩 Problem: Reconnaissance 2

- **Difficulty:** 800 Rating

---

## 📌 Problem

Given `n` soldiers standing in a circle, find any pair of neighboring soldiers whose height difference is minimum.

The first and last soldiers are also considered neighbors.

### Example

**Input:**
```text
5
10 12 13 15 10
```

**Output:**
```text
5 1
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
#include <climits>
using namespace std;

int main() {

    int n;
    cin>>n;

    vector<int> arr(n);

    int minDiff = INT_MAX;

    int idx1 = -1, idx2 = -1;

    for(int i=0; i<n; i++) {
        cin>>arr[i];

        if(i > 0) {
            int diff = abs(arr[i] - arr[i-1]);
            if(diff < minDiff) {
                minDiff = diff;
                idx1 = i-1;
                idx2 = i;
            }
        }
    }

    int diff = abs(arr[0] - arr[n-1]);

    if(diff < minDiff) {
        idx1 = n-1;
        idx2 = 0;
    }

    cout<<idx1+1<<" "<<idx2+1<<endl;

    return 0;
}
```

---

## 📸 Acceptance Screenshot

![Codeforces Accepted Submission](../screenshots/Beginner/day6-accepted.png)