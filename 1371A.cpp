#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;

    int stick = 0;
    while(t--) {
        int n;
        cin>> n;

        if(n>=0 && n%2==0) {
            stick = n/2;
        }
        else if(n>=3 && n%2!=0) {
            stick = n/2 + n%2;
        }
        else if(n=1) {
            stick = 1;
        }
        cout<< stick<< '\n';
    }

    return 0;
}