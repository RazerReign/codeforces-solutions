#include <iostream>
using namespace std;

int main() {
    int n;
    cin>> n;

    int Petya,Vasya,Tonya;

    int time = 0;
    for(int i=0; i<n; i++) {
        cin>> Petya >>Vasya >> Tonya;

        if(Petya + Vasya + Tonya >= 2) {
            time++;
        }
    }

    cout<< time;

    return 0;
}