# 🚀 POTD Challenge - Day 6

## 🧩 Problem: Quasi-palindrome

- **Difficulty:** 900 Rating

---

## 📌 Problem

Given an integer `x`, determine whether it is a **quasi-palindromic** number.

A number is quasi-palindromic if removing all trailing zeroes makes the remaining number a palindrome.

### Example

**Input:**
```text
2010200
```

**Output:**
```text
YES
```

---

## ⏱️ Time Complexity

**O(log n)**

---

## 💾 Space Complexity

**O(log n)**

---

## 💻 Solution

```cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin>>n;

    while(n % 10 == 0) {
        n /= 10;
    }

    string numStr = to_string(n);

    string reversedStr = numStr;
    reverse(reversedStr.begin(), reversedStr.end());

    if(numStr == reversedStr) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }

    return 0;
}
```

---

## 📸 Acceptance Screenshot

![Codeforces Accepted Submission](../screenshots/Intermediate/day6-accepted.png)