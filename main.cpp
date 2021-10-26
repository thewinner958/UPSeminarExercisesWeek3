#include <iostream>

using namespace std;
int main() {
    // Exercise 0
    int number;
    cin >> number;
    (number >= 5 && number <= 20) && number % 2 == 0 ? cout << "even\n" : cout << "odd\n";

    // Exercise 1
    int n;
    cin >> n;
    int dgt1 = n / 100;
    int dgt2 = (n / 100) % 10;
    int dgt3 = n % 10;
    int dgtMultiplication = dgt1 * dgt2 * dgt3;
    int dgtSum = dgt1 + dgt2 + dgt3;
    if (dgtMultiplication >= 100) {
        int dgtDifference = dgtMultiplication - dgtSum;
        cout << "YES " << dgtDifference << endl;
    }
    else {
        cout << "NO " << dgtMultiplication << endl;
    }
    return 0;
}
