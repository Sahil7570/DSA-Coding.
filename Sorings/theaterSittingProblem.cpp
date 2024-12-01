#include <iostream>
using namespace std;

int main() {
    const int rows = 5, cols = 5;
    int seating[rows][cols] = {0};  // Initialize all seats to 0 (empty)

    // Get seating usage dimensions
    int usedRows, usedCols;
    cout << "Enter the number of rows and columns being used (max 5): ";
    cin >> usedRows >> usedCols;

    // Input current seating arrangement
    cout << "Enter the seating arrangement (0 for empty, 1 for occupied):\n";
    for (int i = 0; i < usedRows; i++) {
        for (int j = 0; j < usedCols; j++) {
            cin >> seating[i][j];
        }
    }

    // Display current seating
    cout << "Current seating arrangement:\n";
    for (int i = 0; i < usedRows; i++) {
        for (int j = 0; j < usedCols; j++) {
            cout << seating[i][j] << " ";
        }
        cout << endl;
    }

    // Get seat to reserve
    int reserveRow, reserveCol;
    cout << "Enter row and column to reserve (0-based index): ";
    cin >> reserveRow >> reserveCol;

    // Reserve seat if it’s within range and empty
    if (reserveRow < usedRows && reserveCol < usedCols && seating[reserveRow][reserveCol] == 0) {
        seating[reserveRow][reserveCol] = 1;
        cout << "Seat reserved successfully.\n";
    } else {
        cout << "Seat cannot be reserved. It may be out of range or already occupied.\n";
    }

    // Display updated seating
    cout << "Updated seating arrangement:\n";
    for (int i = 0; i < usedRows; i++) {
        for (int j = 0; j < usedCols; j++) {
            cout << seating[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
