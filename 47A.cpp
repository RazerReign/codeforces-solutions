#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin>> n;

    long long val = 8LL * n+1;
    long long root = round(sqrt(val));

    if(root*root == val) {
        cout<< "YES"<< '\n';
    }

    else {
        cout<< "NO"<< '\n';
    }

    return 0;
}