#include <stdio.h>

int main()
{
    int a[10], b[10];
    for (int i = 0; i < 10; i++) {
        scanf_s("%d", &a[i]);
        b[i] = a[i];
    }
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (a[i] % 10 > a[j] % 10) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        printf_s("%d ", a[i]);
    }
    printf_s("\n");
    return 0;
}