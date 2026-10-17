# 🚀 POTD Challenge - Day 17

## 🧩 Problem: Is your horseshoe on the other hoof?

- **Difficulty:** 800 Rating

---

## 📌 Problem

Valera has four horseshoes, each with a specific color. He wants to wear four horseshoes of different colors to a party. Given the colors of his horseshoes, determine the minimum number of additional horseshoes he must buy to make all four colors distinct.

### Example

**Input:**
```text
1 7 3 3
```

**Output:**
```text
1
```

---

## ⏱️ Time Complexity

**O(log n)**

---

## 💾 Space Complexity

**O(1)**

---

## 💻 Solution

```cpp
#include <iostream>
#include <set>
using namespace std;

int main() {

    int s1, s2, s3, s4;
    cin>>s1>>s2>>s3>>s4;

    set<int> shoes;

    shoes.insert(s1);
    shoes.insert(s2);
    shoes.insert(s3);
    shoes.insert(s4); 

    cout<<4-shoes.size()<<endl;

    return 0;
}
```

---

## 📸 Acceptance Screenshot

![Codeforces Accepted Submission](../screenshots/Beginner/day17-accepted.png)