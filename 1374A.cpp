#include <iostream>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin>> t;

    while(t--) {
        int x,y,n,k;
        cin>> x>> y>> n;
        
        int rem = n%x;

        if(rem>=y) {
            k=n-(rem-y);
        }

        else {
            k= n-rem-(x-y);
        }

        cout<< k<< '\n';
    }

    return 0;
}