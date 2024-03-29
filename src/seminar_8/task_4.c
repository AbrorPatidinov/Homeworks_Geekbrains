#include <stdio.h>

int is_two_same(int size, int a[]) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] == a[j]) {
                return 1; // Found two identical elements
            }
        }
    }
    return 0; // No identical elements found
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 1, 4, 5};

    printf("Array 1: %s\n", is_two_same(5, arr1) ? "YES" : "NO");
    printf("Array 2: %s\n", is_two_same(5, arr2) ? "YES" : "NO");

    return 0;
}