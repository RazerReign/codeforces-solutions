#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        int n;
        cin>> n;

        int x = n/3;
        if(n%3 == 0) {
            cout<< x<< " "<< x<< '\n';
        }
        else if(n%3 == 1) {
            cout<< x+1<< " "<< x<< '\n';
        }
        else {
            cout<< x<< " "<< x+1<< '\n';
        }
    }

    return 0;
}