#include <bits/stdc++.h>
using namespace std;

int main() {

    int k;
    string s;

    cin>>k;
    cin>>s;

    unordered_map<char, int> mp;

    for(char c : s) {
        mp[c]++;
    }

    string t = "";

    for(auto& p : mp) {
        if(p.second % k != 0) {
            cout<<-1<<endl;
            return 0;
        }

        t += string(p.second/k, p.first);
    }

    string res = "";

    for(int i = 0; i < k; i++) res+=t;

    cout<<res<<endl;
    
    return 0;


}