#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        int n;
        cin>> n;

        if(n==1) {
            cout<< 2<< '\n';
        }

        else {
            cout<< (n+2) / 3<< '\n';
        }
    }

    return 0;
}