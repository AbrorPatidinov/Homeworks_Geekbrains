#include <stdio.h>

#include "../includes/additional.h"

// First task function
void printNum(int num)
{
    if (num < 10) printf_s("%d ", num);
    else
    {
        printNum(num / 10);
        printf_s("%d ", num % 10);
    }
}

// Second task function
void printSequence(int a, int b)
{
    if (a <= b)
    {
        printf_s("%d ", a);
        if (a < b) printSequence(a + 1, b);
    } else {
        printf_s("%d ", a);
        printSequence(a - 1, b);
    }
}

// Third task function
int countOnes(int number)
{
    int count = 0;
    while (number > 0)
    {
        if (number % 2 == 0) count++;
        number /= 2;
    }
    return count;
}

void seminar_6(BOOL showFirstTask, BOOL showSecondTask, BOOL showThirdTask)
{
    if (showFirstTask)
    {
        int number;
        printf_s("Enter the number: ");
        scanf_s("%d ", &number);
        printNum(number);
    }

    printf_s("\n");

    if (showSecondTask)
    {
        int a, b;
        printf_s("Enter two numbers with space: ");
        scanf_s("%d %d", &a, &b);
        printSequence(a, b);
    }

    printf_s("\n");

    if (showThirdTask)
    {
        int number;
        printf_s("Enter the number: ");
        scanf_s("%d ", &number);
        printf_s("%d\n", countOnes(number));
    }
}