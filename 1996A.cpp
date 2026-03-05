#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        int n;
        cin>> n;

        if (n%2 == 1) {
            cout<< -1<< '\n';
        }
        else {
            cout<< n/4 + (n%4)/2<< '\n';
        }
    }

    return 0;
}