#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        int x;
        cin>> x;

        int d = x%10;

        string aprt = to_string(x);
        int length = aprt.length();

        int call = (d-1)*10 + length*(length+1)/2;

        cout<< call<< '\n';
    }

    return 0;
}