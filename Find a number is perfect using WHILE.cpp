#include <iostream>
using namespace std;

int main() {
    double input;
    cout << "Enter a number: ";

    
    if (!(cin >> input)) {
        cout << "Invalid Input" << endl;
    } 
    
    else if (input <= 1 || input != (int)input) {
        cout << input << " is not a perfect number" << endl;
    } 
    else {
        int num = (int)input;
        int sum = 0;
        int i = 1;

        
        while (i <= num / 2) {
            if (num % i == 0) {
                sum += i;
            }
            i++; 
        }

        
        if (sum == num) {
            cout << num << " is a perfect number" << endl;
        } else {
            cout << num << " is not a perfect number" << endl;
        }
    }

    return 0;
}
