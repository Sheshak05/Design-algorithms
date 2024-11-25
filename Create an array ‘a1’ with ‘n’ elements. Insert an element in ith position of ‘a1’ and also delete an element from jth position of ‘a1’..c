#include <stdio.h>

void insert(int arr[], int *n, int pos, int val) {
    for (int i = *n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = val;
    (*n)++;
}

void delete(int arr[], int *n, int pos) {
    for (int i = pos; i < *n - 1; i++)
        arr[i] = arr[i + 1];
    (*n)--;
}

int main() {
    int a1[100] = {1, 2, 3, 4, 5};
    int n = 5, i = 2, j = 3;

    insert(a1, &n, i, 99);
    delete(a1, &n, j);

    for (int k = 0; k < n; k++)
        printf("%d ", a1[k]);
    return 0;
}

