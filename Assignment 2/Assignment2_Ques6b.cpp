#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[4][3] = {{0,0,3}, {0,2,5}, {1,1,7}, {2,0,6}};
    int n1 = 4;

    int b[4][3] = {{0,0,2}, {0,2,4}, {1,1,1}, {2,0,1}};
    int n2 = 4;

    int sum[4][3];

    for(int i = 0; i < n1; i++){
        sum[i][0] = a[i][0];
        sum[i][1] = a[i][1];
        sum[i][2] = a[i][2] + b[i][2];
    }

    cout << "Sum:\n";
    for(int i = 0; i < n1; i++)
        cout << sum[i][0] << " " << sum[i][1] << " " << sum[i][2] << "\n";

    return 0;
}
