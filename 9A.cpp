#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int y,w;
    cin>> y>> w;

    int mx = max(y,w);
    int num = 7-mx;
    int den = 6;

    int g = __gcd(num, den);

    cout<< num/g << "/"<< den/g<< '\n';

    return 0;
}