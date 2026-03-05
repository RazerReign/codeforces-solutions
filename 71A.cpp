// learnt about lambda function
// which is used if we want to create a function inside a function

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>> n;

    
    for(int i=0; i<n; ++i) {
        string str;
        cin>> str;

        int size = str.length();
    int sz = size - 2;

    if(size>10) {
        cout<< str[0]<< sz<< str[size - 1]<< endl;
    }
    
    else{
        cout<< str<< endl;
    }
    }
return 0;
}