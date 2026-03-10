#include <iostream>
using namespace std;

int main() {
    double n_val;
    cout << "Enter the value of n: ";

    
    if (!(cin >> n_val)) {
        cout << "Invalid Input" << endl;
        return 0;
    }

    
    int n = (int)n_val;
    double sum = 0;
    double current_num;
    int i = 0;

    
    if (n <= 0) {
        cout << "Sum: 0" << endl;
        return 0;
    }

    cout << "Enter the numbers: ";
    while (i < n) {
        
        if (cin >> current_num) {
            sum += current_num;
            i++;
        } else {
            
            break;
        }
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
