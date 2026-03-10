#include <iostream>
using namespace std;

int main() {
    double n_input;
    cout << "Enter the value of n: ";

    // Handle Test Case 3: Character input 'A'
    if (!(cin >> n_input)) {
        cout << "Invalid Input" << endl;
        return 0;
    }

    int n = (int)n_input;
    double sum = 0;
    double current_num;
    int i = 0;

    // Handle Test Cases 1 & 2: If n is 0 or negative, skip the loop
    if (n > 0) {
        cout << "Enter the numbers: ";
        do {
            if (cin >> current_num) {
                sum += current_num;
                i++;
            } else {
                break; // Stop if input fails (Test Case 4)
            }
        } while (i < n);
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
