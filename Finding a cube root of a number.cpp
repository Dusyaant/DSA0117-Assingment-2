#include <iostream>
#include <cmath> // Required for cbrt()
#include <iomanip> // Required for setting decimal precision

using namespace std;

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;

    // Conditional statement to handle special formatting for zero
    if (num == 0) {
        cout << "Output: 0" << endl;
    } else {
        // Calculate cube root using cbrt()
        double result = cbrt(num);
        
        // Output with fixed precision for decimal cases
        cout << "Output: " << fixed << setprecision(4) << result << endl;
    }

    return 0;
}
