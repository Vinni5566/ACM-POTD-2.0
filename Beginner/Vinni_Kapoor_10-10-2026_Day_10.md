# 🚀 POTD Challenge - Day 10

## 🧩 Problem: Sleuth

- **Difficulty:** 800 Rating

---

## 📌 Problem

Given a question ending with a question mark, determine whether the last letter of the question is a vowel or a consonant. Ignore spaces, punctuation, and letter case.

The vowels are `A`, `E`, `I`, `O`, `U`, and `Y`.

Print `YES` if the last letter is a vowel; otherwise, print `NO`.

### Example

**Input:**
```text
Is it an apple?
```

**Output:**
```text
YES
```

---

## ⏱️ Time Complexity

**O(n)** — traversing the string to find the last letter takes linear time.

---

## 💾 Space Complexity

**O(n)** — storing the input string requires linear space.

---

## 💻 Solution

```cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string str;
    getline(cin, str);

    int n = str.length();

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    int idx = n-2;

    while(!isalpha(str[idx])) {
        idx--;
    }

    if(str[idx] == 'a' || str[idx] == 'e' || str[idx] == 'i' || str[idx] == 'o' || str[idx] == 'u' || str[idx] == 'y') {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
```

---

## 📸 Acceptance Screenshot

![Codeforces Accepted Submission](../screenshots/Beginner/day10-accepted.png)