#include <bits/stdc++.h>

using namespace std;

int main() {
    int r, c, n;
    cout << "Enter rows, columns, and no of non zero elements: ";
    cin >> r >> c >> n;

    int mat[100][3], trans[100][3];

    cout << "Enter row, column, value of non zero element:\n";
    for(int i = 0; i < n; i++)
        cin >> mat[i][0] >> mat[i][1] >> mat[i][2];

    for(int i = 0; i < n; i++) {
        trans[i][0] = mat[i][1];
        trans[i][1] = mat[i][0];
        trans[i][2] = mat[i][2];
    }

    cout << "\nTransposed in triplet form:\n";
    for(int i = 0; i < n; i++)
        cout << trans[i][0] << " " << trans[i][1] << " " << trans[i][2] << "\n";

    return 0;
}
