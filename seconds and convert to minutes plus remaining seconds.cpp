#include <iostream>
using namespace std;

int main() {
    int seconds;
    cout << "Enter total seconds: ";
    cin >> seconds;

    int minutes = seconds / 60;
    int remaining = seconds % 60;

    cout << "Minutes = " << minutes << endl;
    cout << "Remaining seconds = " << remaining << endl;

    return 0;
}