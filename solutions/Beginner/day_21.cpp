#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    string s;
    cin>>s;

    if(s.length() == 1) {
        cout<<s<<endl;
        return 0;
    }

    vector<int> nums;

    for(char c : s) {
        if(c != '+') {
            nums.push_back(c-'0');
        }
    }

    sort(nums.begin(), nums.end());

    int j = 0;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] != '+') {
            s[i] = nums[j]+'0';
            j++;
        }
    }

    cout<<s<<endl;

    return 0;
}