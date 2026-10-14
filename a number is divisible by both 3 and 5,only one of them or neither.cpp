#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 3 == 0 && n % 5 == 0) {
        cout << "Divisible by both 3 and 5";
    }
    else if (n % 3 == 0 || n % 5 == 0) {
        cout << "Divisible by only one of them";
    }
    else {
        cout << "Divisible by neither";
    }

    return 0;
}