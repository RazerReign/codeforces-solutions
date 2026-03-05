#include <iostream>
using namespace std;

int main(){
    int M,N;
    cin>> M>> N;

    int count;

    for(int i=0; i<M; i++) {
        if(M%2 == 0 && N%2 == 0) {
            count = M/2*N;
        }
        if(M%2 != 0 && N%2 != 0) {
            if(M>=1) {
                count = (((M-1)/2)*N) + (((N+1)/2) - 1);
            }
        }
        if(M%2 == 0 && N%2 != 0) {
            count = (M/2)*N;
        }
        if(M%2 != 0 && N%2 == 0) {
            count = (N/2)*M;
        }
    }

    cout<< count;
    return 0;
}