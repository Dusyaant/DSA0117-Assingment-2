#include <iostream>
using namespace std;

int main() {
    double n_input;
    cout << "Enter the value of n: ";
    
    
    if (!(cin >> n_input)) {
        cout << "Invalid Input: n must be a number." << endl;
        return 0;
    }

    
    int n = (int)n_input;
    if (n <= 0) {
        cout << "Sum: 0 (No numbers to process)" << endl;
        return 0;
    }

    double sum = 0;
    double current_num;
    cout << "Enter the numbers: ";

    for (int i = 0; i < n; i++) {
        // Test Case 4: If user provides fewer numbers than n, loop waits or fails
        if (cin >> current_num) {
            sum += current_num;
        } else {
            break; 
        }
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
