#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n, k;
    cin>>n>>k;

    vector<int> scores(n);

    for(int i = 0; i < n; i++) {
        cin>>scores[i];
    }

    int res = 0;

    for(int i = 0; i < n; i++) {
        if(scores[i] > 0 && scores[i] >= scores[k-1]) res++;
    }

    cout<<res<<endl;

    return 0;
}