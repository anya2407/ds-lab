#include <bits/stdc++.h>

using namespace std;

void removeDuplicate(int *arr, int &n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; ) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }
}

void displayArr(int *arr, int n) {
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "]\n";
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int *arr = (int*)malloc(n*sizeof(int));

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "\nOriginal array: ";
    displayArr(arr, n);

    removeDuplicate(arr, n);

    cout << "Array after removing duplicates: ";
    displayArr(arr, n);

    free(arr);
    return 0;
}
