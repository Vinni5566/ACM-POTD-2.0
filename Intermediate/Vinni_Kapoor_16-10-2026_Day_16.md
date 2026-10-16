# 🚀 POTD Challenge - Day 16

## 🧩 Problem: Chat room

- **Difficulty:** 1000 Rating

---

## 📌 Problem

Given a string `s`, determine whether deleting some characters from it can produce the word `"hello"` while preserving the order of the remaining characters. Print `YES` if possible; otherwise, print `NO`.

### Example

**Input:**
```text
ahhellllloou
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

    string s;
    cin>>s;

    string t = "hello";

    int j = 0;
    int i = 0;

    while(i < s.length()) {

        if(j == t.length()) {
            cout<<"YES"<<endl;
            return 0;
        }

        if(s[i] == t[j]) j++;
        i++;
    }

    if(j == t.length()) {
        cout<<"YES"<<endl;
        return 0;
    }

    cout<<"NO"<<endl;

    return 0;
}
```

---

## 📸 Acceptance Screenshot

![Codeforces Accepted Submission](../screenshots/Intermediate/day16-accepted.png)