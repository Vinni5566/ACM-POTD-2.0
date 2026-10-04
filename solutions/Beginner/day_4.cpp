#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n, d;
    cin>>n>>d;

    vector<int> heights(n);

    for(int i = 0; i < n; i++) {
        cin>>heights[i];
    }

    long long ways = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(abs(heights[i] - heights[j]) <= d) {
                ways+=2;
            }
        }
    }
    
    cout<<ways<<endl;

    return 0;
}