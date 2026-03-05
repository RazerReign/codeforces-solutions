#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>> t;

    while(t--) {
    long long n,k,x;
    cin>> n>> k>> x;

    long long mn = k*(k+1)/2;
    long long mx = n*k-k*(k-1)/2;

    if(mn<=x && x<=mx) {
        cout<< "Yes"<< '\n';
    }

    else {
        cout<< "No"<< '\n';
    }
    }   

    return 0;
}