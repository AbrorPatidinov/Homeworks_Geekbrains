#include <stdio.h>
#include <stdlib.h>

#include "../includes/additional.h"

void seminar_4(BOOL showFirstTask, BOOL showSecondTask, BOOL showThirdTask, BOOL showFourthTask, BOOL showFifthTask)
{
    // First Task
    if (showFirstTask)
    {
        printf_s("First task \n");

        int a, b, sumSquares = 0;
        printf_s("Enter two numbers with space: ");
        scanf_s("%d%d", &a, &b);
        for (int i = a; i <= b; i++)
        {
            sumSquares += i * i;
        }
        printf_s("Result is: %d", sumSquares);
    }

    // Second Task
    if (showSecondTask)
    {
        printf_s("Second task \n");

        int number;
        printf_s("Enter three numbers only: ");
        scanf_s("%d", &number);
        if (number >= 100 && number <= 999)
        {
            printf_s("YES");
        } else printf_s("NO");
    }

    // Third task
    if (showThirdTask)
    {
        printf_s("Third task \n");

        int number;
        printf_s("Enter the number: ");
        scanf_s("%d", &number);
        if (number % 2 == 0)
        {
            printf_s("Even !");
        } else printf_s("Odd !");
    }

    // Fourth Task
    if (showFourthTask)
    {
        printf_s("Fourth task \n");

        int number, reversedNumber = 0;
        printf_s("Enter the number: ");
        scanf_s("%d", &number);
        while (number > 0)
        {
            reversedNumber = reversedNumber * 10 + number % 10;
            number /= 10;
        }
        printf_s("%d", reversedNumber);
    }

    // Fifth Task
    if (showFifthTask)
    {
        printf_s("Fifth task \n");

        int number;
        printf_s("Enter the number: ");
        scanf_s("%d", &number);

        for (int i = 10; i <= number; i++)
        {
            int sumDigits = 0, productDigits = 1;
            int temp = i;

            // solving sum of numbers
            while (temp > 0)
            {
                sumDigits += temp % 10;
                temp /= 10;
            }

            // solving the equation of numbers
            temp = i;
            while (temp > 0)
            {
                productDigits *= temp % 10;
                temp /= 10;
            }

            // Checking
            if (sumDigits == productDigits)
            {
                printf_s("%d ", i);
            }
        }
    }
}