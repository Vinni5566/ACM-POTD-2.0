#include <iostream>
using namespace std;

int main() {

    string code;

    cin>>code;

    string res = "";

    for(int i=0; i<code.length(); i++) {

        if(code[i] == '.') res += '0';
        else if(code[i] == '-' && code[i+1] == '.') {
            res += '1';
            i++;
        }
        else if(code[i] == '-' && code[i+1] == '-') {
            res += '2';
            i++;
        }

    }

    cout<<res;
}

