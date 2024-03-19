#include <stdio.h>

int main()
{
    int a[5], min;
    scanf_s("%d", &a[0]);
    min = a[0];
    for (int i = 1; i < 5; i++) {
        scanf_s("%d", &a[i]);
        if (a[i] < min) {
            min = a[i];
        }
    }
    printf_s("%d\n", min);
    return 0;
}