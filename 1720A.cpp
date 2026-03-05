#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin>> t;

    while(t--) {
        long long a, b, c, d;
        std::cin>> a>> b>> c>> d;

        if(a==0 && c==0) {
            std::cout<< 0<< '\n';
            continue;
        }

        if(a==0 || c==0) {
            std::cout<< 1<< '\n';
            continue;
        }

        long long p = b/ std::__gcd(b, d) * d;
        a *= p / b;
        c *= p / d;
        if(a==c) {
            cout<< 0<< '\n';
        }

        else if(a%c == 0 || c%a == 0) {
            cout<< 1<< '\n';
        }

        else {
            cout<< 2<< '\n';
        }
    }

    return 0;
}