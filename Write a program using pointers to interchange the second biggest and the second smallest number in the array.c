#include <stdio.h>
#include <limits.h>

void swapSecondLargestSmallest(int *arr, int n) {
    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondSmallest = INT_MAX;
    int *secondLargestPtr = NULL, *secondSmallestPtr = NULL;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            secondLargestPtr = &arr[i - 1];
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
            secondLargestPtr = &arr[i];
        }

        if (arr[i] < smallest) {
            secondSmallest = smallest;
            secondSmallestPtr = &arr[i - 1];
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
            secondSmallestPtr = &arr[i];
        }
    }

    if (secondLargestPtr && secondSmallestPtr) {
        int temp = *secondLargestPtr;
        *secondLargestPtr = *secondSmallestPtr;
        *secondSmallestPtr = temp;
    }
}

int main() {
    int arr[] = {10, 20, 4, 50, 30, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    swapSecondLargestSmallest(arr, n);

    printf("Array after swap: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

