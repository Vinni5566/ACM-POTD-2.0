#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    vector<int> digits;

    int cnt0 = 0;

    while(n > 0) {
        if(n%10 == 0) cnt0++;
        else digits.push_back(n%10);
        n/=10;
    }

    sort(nums.begin(), nums.end());

    
}