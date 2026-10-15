# 🚀 POTD Challenge - Day 15

## 🧩 Problem: Football

- **Difficulty:** 1000 Rating

---

## 📌 Problem

Given the names of the teams that scored each goal in a football match, determine the winning team. At most two different teams participate, and it is guaranteed that the match does not end in a tie.

### Example

**Input:**
```text
5
A
ABA
ABA
A
A
```

**Output:**
```text
A
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
#include <unordered_map>
using namespace std;

int main() {

    int n;
    cin >> n;

    unordered_map<string, int> mp;

    for(int i = 0; i < n; i++) {
        string teamName;
        cin >> teamName;

        mp[teamName]++;
    }

    string res = "";
    int maxScore = 0;

    for(auto& p : mp) {
        if(p.second > maxScore) {
            maxScore = p.second;
            res = p.first;
        }
    }

    cout << res << endl;

    return 0;
}
```

---

## 📸 Acceptance Screenshot

![Codeforces Accepted Submission](../screenshots/Intermediate/day15-accepted.png)