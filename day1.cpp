#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    cout << endl;

    int i = 1;
    while(i<=n) {
        int j = 1;
        char ch = 'A';
        while(j<=n) {
            cout << ch << " ";
            j++;
        }
        cout << endl;
        // ch++;
        i++;
    }

} 