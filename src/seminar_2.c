#include <stdio.h>
#include <stdlib.h>

#include "../includes/additional.h"

void seminar_2(BOOL showFirstTask, BOOL showSecondTask, BOOL showThirdTask, BOOL showFourthTask)
{
    if (showFirstTask)
    {
        printf_s("First task: \n");

        // First task
        printf_s("Enter three numbers with space: "); int firstNumber, secondNumber, thirdNumber, result;
        scanf_s("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);
        result = firstNumber + secondNumber + thirdNumber;
        printf_s("The sum of three numbers is: %d + %d + %d = %d", firstNumber, secondNumber, thirdNumber, result);
    }

    if (showSecondTask)
    {
        printf_s("Second task: \n");

        // Second task
        printf_s("Enter three number with space: "); int firstNumberClone, secondNumberClone, thirdNumberClone, additionResult, multiplicationResult;
        scanf_s("%d %d %d", &firstNumberClone, &secondNumberClone, &thirdNumberClone);
        additionResult = firstNumberClone + secondNumberClone + thirdNumberClone;
        multiplicationResult = firstNumberClone * secondNumberClone * thirdNumberClone;
        printf_s("The result of adding three numbers is: %d + %d + %d = %d\n", firstNumberClone, secondNumberClone, thirdNumberClone, additionResult);
        printf_s("The result of multiplying three numbers is: %d * %d * %d = %d\n", firstNumberClone, secondNumberClone, thirdNumberClone, multiplicationResult);
    }

    if (showThirdTask)
    {
        printf_s("Third task: \n");

        // Third task
        printf_s("Enter two numbers with space: "); int number_1, number_2, subtractionResult;
        scanf_s("%d %d", &number_1, &number_2);
        subtractionResult = number_1 - number_2;
        printf_s("The result of subtraction two numbers is: %d - %d = %d", number_1, number_2, subtractionResult);
    }

    if (showFourthTask)
    {
        printf_s("Fourth task: \n");

        // Fourth task
        printf_s("Enter four numbers without space: "); int number1, number2, number3, number4; float averageResult;
        scanf_s("%d%d%d%d", &number1, &number2, &number3, &number4);
        averageResult = (float)(number1 + number2 + number3 + number4) / 4;
        printf_s("The average result of four numbers is: %.2f", averageResult);
    }
}

