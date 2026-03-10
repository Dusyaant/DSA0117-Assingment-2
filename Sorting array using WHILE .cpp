#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 2, 3, 5, 6, 7}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    while (i < n) {
        if (arr[i] != i) {
            // Found the gap
            break; 
        }
        i++;
    }

    cout << "Smallest missing element is: " << i << endl;

    return 0;
}
