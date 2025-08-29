#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[4][3] = {{0,0,2}, {0,2,3}, {1,1,4}, {2,0,1}};
    int n1 = 4;

    int b[4][3] = {{0,1,5}, {1,0,6}, {2,1,7}, {2,2,8}};
    int n2 = 4;

    int res[20][3], k = 0;

    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(a[i][1] == b[j][0]) { 
                int row = a[i][0];
                int col = b[j][1];
                int val = a[i][2] * b[j][2];

                int found = -1;
                for(int p=0; p<k; p++){
                    if(res[p][0]==row && res[p][1]==col) {
                        found = p; break;
                    }
                }
                if(found != -1) res[found][2] += val;
                else {
                    res[k][0] = row;
                    res[k][1] = col;
                    res[k][2] = val;
                    k++;
                }
            }
        }
    }

    cout << "Product of matrices in triplet form:\n";
    for(int i=0; i<k; i++)
        cout << res[i][0] << " " << res[i][1] << " " << res[i][2] << "\n";

    return 0;
}
