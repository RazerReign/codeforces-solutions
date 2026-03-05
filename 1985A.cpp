#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>> n;

    string a;
    string b;

    while(n--) {
        cin>> a>> b;
            
        swap(a[0], b[0]);
        cout<< a <<" " << b<< '\n';
    }
    
    return 0;
}