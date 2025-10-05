#include<iostream>
using namespace std;

int main() {
    int row;
    cout << "Enter number of rows: ";
    cin >> row;

    // Create array of pointers (jagged array)
    int** arr = new int*[row];
    int* col = new int[row]; // Store number of columns in each row

    // Input number of columns for each row and allocate memory
    for(int i = 0; i < row; i++) {
        cout << "Enter number of columns for row " << i << ": ";
        cin >> col[i];
        arr[i] = new int[col[i]];
    }

    // Input elements
    cout << "\nEnter elements:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col[i]; j++) {
            cin >> arr[i][j];
        }
    }

    // Output elements
    cout << "\nJagged Array:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for(int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] col;

    return 0;
}
