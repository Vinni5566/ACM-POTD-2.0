#include <iostream>
using namespace std;

int main() {

    long long n,m,a;
    cin>>n>>m>>a;

    if(n < a && m < a) {
        cout<<1<<endl;
    } 
    
    else if(n > a && m < a) {
        n += (n%a);
        if(n % a != 0) {
            n -= (n%a);
            n += (a-(n%a));
        }
        cout<<n/a<<endl;
    } 
    
    else if(n < a && m > a) {
        m += (m%a);
        if(m % a != 0) {
            m -= (m%a);
            m += (a-(m%a));
        }
        cout<<m/a<<endl;
    } 
    
    else {
        n += (n%a);
        m += (m%a);

        if(n % a != 0) {
            n -= (n%a);
            n += (a-(n%a));
        }

        if(m % a != 0) {
            m -= (m%a);
            m += (a-(m%a));
        }
        
        long long res = (n*m) / (a*a);
        
        cout<<res<<endl;
    }

    return 0;
}