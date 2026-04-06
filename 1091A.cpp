#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int y,b,r;
    cin>> y>> b>> r;

    int k = min({y, b-1, r-2});

    cout<< 3*k + 3<< '\n';

    return 0;
}