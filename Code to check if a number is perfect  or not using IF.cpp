#include <iostream>
using namespace std;

int main() {
    double input;
    cout << "Enter a number: ";
    
    
    if (!(cin >> input)) {
        cout << "Invalid Input: Not a number" << endl;
        return 0;
    }

    
    int num = (int)input;
    if (num != input || num <= 0) {
        cout << input << " is not a perfect number" << endl;
    } else {
        int sum = 0;
        
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }

        
        if (sum == num) {
            cout << num << " is a perfect number" << endl;
        } else {
            cout << num << " is not a perfect number" << endl;
        }
    }

    return 0;
}
