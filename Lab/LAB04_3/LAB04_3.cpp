

#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    cout << " 3 : ";
    for (int i = 0; i <= 100; i++) {
        if (i % 3 == 0) {
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl << endl;
    cout << "" << sum << endl;
    return 0;
}