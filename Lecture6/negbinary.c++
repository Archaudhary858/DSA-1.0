#include <iostream>
using namespace std;

// Function to print binary representation using 2's complement
void printBinary(int n, int bits) {
    for (int i = bits - 1; i >= 0; i--) {
        int bit = (n >> i) & 1;
        cout << bit;
    }
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int bits = 8; // You can change to 16, 32, etc.
    cout << bits << "-bit binary representation: ";
    printBinary(n, bits);

    return 0;
}
