#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    cin>> n;

        vector<int> year(n-1);

        for(int i=0; i<n-1; i++) {
            cin>> year[i];
        }

        int a,b;
        cin>> a>> b;

        int timetaken = 0;

        for(int k=a-1; k<b-1; k++) {
            timetaken += year[k];
        }

        cout<< timetaken<< '\n';
    
    return 0;
}