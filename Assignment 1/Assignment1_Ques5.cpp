#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cout << "Enter number of rows and cols: ";
    cin >> m >> n;

    int arr[10][10];

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nRow sums:\n";
    for (int i = 0; i < m; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += arr[i][j];
        }
        cout << "Row " << i + 1 << " = " << rowSum << "\n";
    }

    cout << "\nColumn sums:\n";
    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < m; i++) {
            colSum += arr[i][j];
        }
        cout << "Column " << j + 1 << " = " << colSum << "\n";
    }

    return 0;
}
