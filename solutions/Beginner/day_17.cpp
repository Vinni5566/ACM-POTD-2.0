#include <iostream>
#include <set>
using namespace std;

int main() {

    int s1, s2, s3, s4;
    cin>>s1>>s2>>s3>>s4;

    set<int> shoes;

    shoes.insert(s1);
    shoes.insert(s2);
    shoes.insert(s3);
    shoes.insert(s4); 

    cout<<4-shoes.size()<<endl;

    return 0;
}