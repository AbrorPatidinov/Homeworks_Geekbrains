#include <stdio.h>

int main()
{
    int a[12], temp[4];
    for (int i = 0; i < 12; i++) {
        scanf_s("%d", &a[i]);
    }
    for (int i = 0; i < 4; i++) {
        temp[i] = a[12 - 4 + i];
    }
    for (int i = 11; i >= 4; i--) {
        a[i] = a[i - 4];
    }
    for (int i = 0; i < 4; i++) {
        a[i] = temp[i];
    }
    for (int i = 0; i < 12; i++) {
        printf_s("%d ", a[i]);
    }
    printf_s("\n");
    return 0;
}