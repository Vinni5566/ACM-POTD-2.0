#include <iostream>
#include <stack>
using namespace std;

int main() {

    string s;
    cin>>s;

    stack<char> st;

    int l = 0;

    for(char c : s) {

        if(c == '(') st.push(c);
        else {
            if(!(st.empty())) st.pop();
            else l++;
        }
    }

    cout<<s.length()-l-st.size();

    return 0;
}