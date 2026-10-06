# 🚀 POTD Challenge - Day 7

## 🧩 Problem: Search for Pretty Integers

- **Difficulty:** 900 Rating

---

## 📌 Problem

Given two lists of non-zero digits, find the smallest positive integer whose decimal representation contains at least one digit from the first list and at least one digit from the second list.

### Example

**Input:**
```text
2 3
4 2
5 7 6
```

**Output:**
```text
25
```

---

## ⏱️ Time Complexity

**O(n log n + m log m)**

---

## 💾 Space Complexity

**O(n + m)**

---

## 💻 Solution

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {

    int n, m;
    cin>>n>>m;

    vector<int> firstList(n);
    vector<int> secondList(m);

    for(int i=0;i<n;i++){
        cin>>firstList[i];
    }

    for(int i=0;i<m;i++){
        cin>>secondList[i];
    }

    vector<int> common(10);

    for(int i = 0; i < n; i++) {
        common[firstList[i]]++;
    }

    for(int i = 0; i < m; i++) {
        common[secondList[i]]++;
    }

    int smallestPrettyInteger = INT_MAX;

    for(int i = 0; i < 10; i++) {
        if(common[i] == 2) {
            smallestPrettyInteger = i;
            break;
        }
    }

    sort(firstList.begin(), firstList.end());
    sort(secondList.begin(), secondList.end());

    if(firstList[0] == secondList[0]) {
        smallestPrettyInteger = min(firstList[0], smallestPrettyInteger);
    } else {
        
        int currSmall = min(firstList[0], secondList[0]) * 10 + max(firstList[0], secondList[0]);

        smallestPrettyInteger = min(currSmall, smallestPrettyInteger);
    }

    cout<<smallestPrettyInteger;

    return 0;
}
```

---

## 📸 Acceptance Screenshot

![Codeforces Accepted Submission](../screenshots/Intermediate/day7-accepted.png)