#include <iostream>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--) {
        long long x,y;
        cin>> x>> y;

        if(y==1 || x==y || x == y+1 || x==0 || y==0) {
            cout<< -1<< '\n';
            continue;
        }

        else if(x>=y+2) {
            cout<< 3<< '\n';
        }

        else {
            cout<< 2<< '\n';
        }
    }

    return 0;
}