#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string time;
    cin>>time;

    int h = stoi(time.substr(0, 2));
    int m = stoi(time.substr(3, 2));

    int res_h, res_m;

    if(h >= 6 && h <= 9) {
        cout<<"10:01"<<endl;
        return 0;
    } 
    
    else if(h >= 15 && h <= 19) {
        cout<<"20:02"<<endl;
        return 0;
    } 
    
    else if(h == 5) {
        if(m < 50) cout<<"05:50"<<endl;
        else cout<<"10:01"<<endl;
    } 
    
    else if(h == 15) {
        if(m < 51) cout<<"15:51"<<endl;
        else cout<<"20:02"<<endl;
    }

    else if(h == 23) {
        if(m < 32) cout<<"23:32"<<endl;
        else cout<<"00:00"<<endl;
    }

    else {

        string rev_h = to_string(h);
        reverse(rev_h.begin(), rev_h.end());
        int temp_m = stoi(rev_h);

        if(h <= 9) temp_m = h*10;

        if(m < temp_m) {

            if(h <= 9) cout<<"0"<<h;
            else cout<<h;

            cout<<":";

            if(temp_m <= 9) cout<<"0"<<temp_m<<endl;
            else cout<<temp_m<<endl;
        }
        else {

            h += 1;

            string new_rev_h = to_string(h);
            reverse(new_rev_h.begin(), new_rev_h.end());
            int final_m = stoi(new_rev_h);

            if(h <= 9) {
                final_m = h*10;
            }

            if(h <= 9) cout<<"0"<<h;
            else cout<<h;

            cout<<":";

            if(final_m <= 9) cout<<"0"<<final_m<<endl;
            else cout<<final_m<<endl;
        }

        return 0;
    }
}