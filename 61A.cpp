#include <iostream>
using namespace std;

int main() {
    string n1,n2;
    cin>> n1>> n2;

    int sz = n1.length();
    
    for(int i=0; i<sz; i++) {

        if(n1[i] != n2[i]) {
            n1[i] = '1';
        }
        
        else {
            n1[i] = '0';
        }
    }

    cout<< n1<< '\n';

    return 0;
}