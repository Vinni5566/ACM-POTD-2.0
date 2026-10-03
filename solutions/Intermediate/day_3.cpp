#include <iostream>
using namespace std;

int main() {

    string time;
    int a;

    cin>>time;
    cin>>a;

    if(a == 0) cout<<time<<endl;
    else{
        int h = stoi(time.substr(0,2));
        int m = stoi(time.substr(3,2));

        m += a;

        if(m >= 60){
            h += m/60;
            m = m%60;
        }

        if(h >= 24) h = h%24;

        if(h < 10) cout<<"0";
        cout<<h<<":";
        if(m < 10) cout<<"0";
        cout<<m<<endl;
    }

    return 0;
}