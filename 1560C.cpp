#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        long long k;
        cin>> k;

        long long low = 1, high = k;

        while(low<high) {
            long long mid = low + (high -low) / 2;

            if(mid*mid >= k) {
                high = mid;
            }

            else {
                low = mid + 1;
            }
        }

        long long n = low;

        long long prev = (n-1) * (n-1);

        long long middile = prev + n;

        long long row, col;

        if(k <= middile) {
            row = k -  prev;
            col = n;
        }
        
        else {
            row = n;
            col = n*n-k+1;
        }

        cout<< row<< " "<< col << '\n';
    }

    return 0;
}