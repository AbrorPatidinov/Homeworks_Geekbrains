#include <stdio.h>
#include <stdlib.h>

#include "../includes/additional.h"

void seminar_3(BOOL showFirstTask, BOOL showSecondTask, BOOL showThirdTask, BOOL showFourthTask, BOOL additionalTask)
{
    // First task
    if (showFirstTask)
    {
        int firstNumber, secondNumber, thirdNumber, fourthNumber,
                fifthNumber, greatestNumber;

        printf_s("Enter 5 numbers with space: ");
        scanf_s("%d%d%d%d%d", &firstNumber, &secondNumber, &thirdNumber,
                &fourthNumber, &fifthNumber);

        greatestNumber = firstNumber;

        if (secondNumber > greatestNumber) greatestNumber = secondNumber;
        if (thirdNumber > greatestNumber) greatestNumber = thirdNumber;
        if (fourthNumber > greatestNumber) greatestNumber = fourthNumber;
        if (fifthNumber > greatestNumber) greatestNumber = fifthNumber;

        printf_s("The greatest number is: %d", greatestNumber);
    }

    // Second task
    if (showSecondTask)
    {
        int firstNumber, secondNumber, thirdNumber, fourthNumber,
                fifthNumber, greatestNumber;

        printf_s("Enter 5 numbers with space: ");
        scanf_s("%d%d%d%d%d", &firstNumber, &secondNumber, &thirdNumber,
                &fourthNumber, &fifthNumber);

        greatestNumber = firstNumber;

        if (secondNumber < greatestNumber) greatestNumber = secondNumber;
        if (thirdNumber < greatestNumber) greatestNumber = thirdNumber;
        if (fourthNumber < greatestNumber) greatestNumber = fourthNumber;
        if (fifthNumber < greatestNumber) greatestNumber = fifthNumber;

        printf_s("The least number is: %d", greatestNumber);
    }

    // Third task
    if (showThirdTask)
    {
        int firstNumber, secondNumber, thirdNumber;

        printf_s("Enter 3 numbers with space: ");
        scanf_s("%d%d%d", &firstNumber, &secondNumber, &thirdNumber);

        if (firstNumber > secondNumber)
        {
            printf_s("NO !");
            return;
        }
        if (secondNumber > thirdNumber)
        {
            printf_s("NO");
            return;
        }

        printf_s("YES");
    }

    // Fourth task
    if (showFourthTask)
    {
        int numberOfMonth;
        printf_s("Enter the number of month: ");
        scanf_s("%d", &numberOfMonth);

        if (numberOfMonth >= 1 && numberOfMonth <= 3) {
            printf_s("Winter");
        } else if (numberOfMonth >= 4 && numberOfMonth <= 6) {
            printf_s("Spring");
        } else if (numberOfMonth >= 7 && numberOfMonth <= 9) {
            printf_s("Summer");
        } else if (numberOfMonth >= 10 && numberOfMonth <= 12) {
            printf_s("Autumn");
        } else {
            printf_s("Wrong number of month");
        }
    }

    // Additional task
    if (additionalTask)
    {
        int a = 9, b = 3;
        printf_s("%d",(a *= b) + (b *= a) ); // Output: 108
    }
}