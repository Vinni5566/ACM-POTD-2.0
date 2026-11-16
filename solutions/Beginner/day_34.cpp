#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    int level = 0;
    int height = 0;

    while(n > 0) { 
        level += 1;
        int totalcubes = level * (level + 1) / 2;

        if(n < totalcubes) break;
        
        n -= totalcubes;

        height++;
    }

    cout<<height<<endl;

    return 0;

}