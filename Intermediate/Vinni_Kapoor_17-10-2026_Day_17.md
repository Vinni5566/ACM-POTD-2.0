# 🚀 POTD Challenge - Day 17

## 🧩 Problem: Young Physicist

- **Difficulty:** 1000 Rating

---

## 📌 Problem

Given `n` force vectors in three-dimensional space, determine whether the body is in equilibrium. The body is in equilibrium if the sum of all x-, y-, and z-coordinates of the force vectors is zero.

Print `YES` if the body is in equilibrium; otherwise, print `NO`.

### Example

**Input:**
```text
3
3 -1 7
-5 2 -4
2 -1 -3
```

**Output:**
```text
YES
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
using namespace std;

int main() {

    int n;
    cin>>n;

    int X=0, Y=0, Z=0;

    while(n--) {
        int x, y, z;
        cin>>x>>y>>z;

        X+=x;
        Y+=y;
        Z+=z;

    }

    if(X == 0 && Y == 0 && Z == 0) {
        cout<<"YES"<<endl;
        return 0;
    }

    cout<<"NO"<<endl;

    return 0;
}
```

---

## 📸 Acceptance Screenshot

![Codeforces Accepted Submission](../screenshots/Intermediate/day17-accepted.png)