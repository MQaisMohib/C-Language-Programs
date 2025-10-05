#include <iostream>
using namespace std;

int main() {
    // Declare an array of 5 integers
    int numbers[5];

    // Input elements from user
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    // Display the array elements
    cout << "\nYou entered: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    // Find sum of array elements
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    cout << "\nSum of all numbers = " << sum << endl;

    return 0;
}
