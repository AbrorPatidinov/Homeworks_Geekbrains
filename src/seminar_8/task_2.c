#include <stdio.h>

void sort_even_odd(int n, int a[]) {
    int left = 0, right = n - 1;

    while (left < right) {
        // Find the first odd number from the left
        while (left < right && a[left] % 2 == 0) {
            left++;
        }

        // Find the first even number from the right
        while (left < right && a[right] % 2 != 0) {
            right--;
        }

        // Swap the odd and even numbers
        if (left < right) {
            int temp = a[left];
            a[left] = a[right];
            a[right] = temp;
        }
    }
}

int main() {
    int a[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5,
               4, 3, 2, 1};

    int n = sizeof(a) / sizeof(a[0]);

    sort_even_odd(n, a);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
