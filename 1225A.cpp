#include <iostream>
using namespace std;

int main() {
    int da, db;
    if(!(cin>> da>> db)) return 0;

    if(da == db) {
        int a = da*10;
        int b = a+1;
        cout<< a<< " "<< b<< '\n';
    }

    else if(db == da+1) {
        int a = da*10+9;
        int b = db*10;
        cout<< a<< " "<< b<< '\n';
    }

    else if(da == 9 && db == 1) {
        cout<< 9<< " "<< 10<< '\n';
    }

    else {
        cout<< -1<< '\n';
    }

    return 0;
}