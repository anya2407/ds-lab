#include <bits/stdc++.h>

using namespace std;

void setDiag(int arr[], int n, int i, int val) {
    arr[i] = val;
}

void displayDiag(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) cout << arr[i] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}

int main() {
    int n = 3;
    int diag[3] = {0};

    setDiag(diag, n, 0, 10);
    setDiag(diag, n, 1, 20);
    setDiag(diag, n, 2, 30);

    cout << "Diagonal Matrix:\n";
    displayDiag(diag, n);

    return 0;
}
