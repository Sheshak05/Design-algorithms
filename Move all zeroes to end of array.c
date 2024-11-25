#include <stdio.h>

void moveZeroesToEnd(int arr[], int n) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        }
    }
}

int main() {
    int arr[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZeroesToEnd(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

