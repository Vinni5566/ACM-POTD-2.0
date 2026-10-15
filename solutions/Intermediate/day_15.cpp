#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    int n;
    cin>>n;

    unordered_map<string, int> mp;

    for(int i = 0; i < n; i++) {
        string teamName;
        cin>>teamName;

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

    cout<<res<<endl;

    return 0;
}