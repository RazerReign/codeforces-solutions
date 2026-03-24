#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;

    for(int test = 0; test < t; test++) {
        long long n,k,p;
        cin>> n>> k>> p;
        long long target = abs(k);

        long long step = (target + p - 1) / p;

        if(step > n) {
            cout<< -1<< '\n';
        }

        else {
            cout<< step<< '\n';
        }
    }

    return 0;
}