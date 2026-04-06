#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>> n;

    string k;
    for(int i=1; k.size()< 1000; i++) {
        k += to_string(i);
    }

    cout<< k[n-1]<< '\n';

    return 0;
}