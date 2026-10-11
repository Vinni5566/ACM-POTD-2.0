# 🚀 POTD Challenge - Day 12

## 🧩 Problem: Spit Problem

- **Difficulty:** 1000 Rating

---

## 📌 Problem

Given `n` camels, each at position `xᵢ` and spitting a distance `dᵢ`, determine whether there are two camels that spit at each other.

A camel at position `x` spits toward position `x + d`. Print `YES` if two camels target each other's positions; otherwise, print `NO`.

### Example

**Input:**
```text
2
0 1
1 -1
```

**Output:**
```text
YES
```

---

## ⏱️ Time Complexity

**O(n log n)**

---

## 💾 Space Complexity

**O(n)**

---

## 💻 Solution

```cpp
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<vector<int>> notes(n, vector<int>(2));

    set<pair<int, int>> camels;

    for(int i = 0; i < n; i++) {
        cin >> notes[i][0];
        cin >> notes[i][1];

        camels.insert({notes[i][0], i});
    }

    for(int i = 0; i < n-1; i++) {

        int target = notes[i][0] + notes[i][1];

        auto it = camels.lower_bound({target, 0});

        if (it != camels.end() && it->first == target) {

            int targetIndex = it->second;

            if(notes[targetIndex][0] + notes[targetIndex][1] == notes[i][0]) {
                cout << "YES" << endl;
                return 0;
            }
        }

    }

    cout << "NO" << endl;

    return 0;
}
```

---

## 📸 Acceptance Screenshot

![Codeforces Accepted Submission](../screenshots/Intermediate/day12-accepted.png)