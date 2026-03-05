#include <iostream>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin>> t;

    while(t--) {
        int n,m,p,q;
        cin>> n>> m>> p>> q;

        int all = n / p;
        int remainder = n % p;

        if(remainder == 0) {
            cout<< (all*1LL*q == m ? "Yes" : "No") << '\n';
        }

        else {
            cout<< "Yes"<< '\n';
        }
    }

    return 0;
}