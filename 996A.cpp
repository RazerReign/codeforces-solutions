#include <iostream>
using namespace std;

int main() {
    long long n;
    cin>> n;

    int cash[] = {100, 20, 10, 5, 1};
    int total = 0;

    for(int i=0; i<5; i++) {
        total += n/cash[i];

        n %= cash[i];
    }

    cout<< total<< '\n';

    return 0;
}