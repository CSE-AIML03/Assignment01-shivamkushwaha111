#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2;

    cout << "Enter two positive integers to find their GCD: ";
    if (!(cin >> num1 >> num2) || num1 <= 0 || num2 <= 0) {
        cout << "Invalid input. Please enter positive integers." <<endl;
        return 1;
    }

    int result = gcd(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is: " << result <<endl;

    return 0;
}

