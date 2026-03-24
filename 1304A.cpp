#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>> t;

    while(t--) {
        long long x,y,a,b;
        cin>> x>> y>> a>> b;

        long long dist = y-x;
        long long speed = a+b;

        if(dist%speed == 0) {
            cout<< dist/speed<< '\n';
        }

        else {
            cout<< "-1"<< '\n';
        }
    }

    return 0;
}