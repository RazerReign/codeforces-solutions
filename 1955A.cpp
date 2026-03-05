#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        int n,a,b;
        cin>> n>> a>> b;

        int cost;
        if(2 * a <= b) {
            cost = n * a;
        }

        else {
            cost = (n/2) * b + (n%2) * a;
        }

        cout<< cost<< '\n';
    }

    return 0;
}