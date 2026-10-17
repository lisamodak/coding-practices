#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, e;
    cout << "Enter marks of 5 subjects: ";
    cin >> a >> b >> c >> d >> e;

    double total = a + b + c + d + e;
    double percentage = (total / 500.0) * 100;

    cout << "Total = " << total << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    return 0;
}