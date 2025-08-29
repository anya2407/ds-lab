#include <bits/stdc++.h>

using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and cols: ";
    cin >> r >> c;

    int A[r][c];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> A[i][j];

    int T[c][r];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            T[j][i] = A[i][j];
        }
    }

    cout << "Transpose:\n";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << T[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
