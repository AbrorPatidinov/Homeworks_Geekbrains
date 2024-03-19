#include <stdio.h>

int main()
{
    int a[5];
    double sum = 0;
    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &a[i]);
        sum += a[i];
    }
    printf_s("%.3f\n", sum / 5);
    return 0;
}