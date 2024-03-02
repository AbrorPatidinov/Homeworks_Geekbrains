#include <stdio.h>

#include "../includes/additional.h"

// First task function
long long int grainsOnSquare(int numberOfCage)
{
    if (numberOfCage < 1 || numberOfCage > 64)
    {
        return -1;
    }
    long long int grains = 1;
    for (int i = 1; i <= 64; i++)
    {
        grains *= 2;
    }
    return grains;
}

// Second task function
int nod(int firstNumber, int secondNumber) {
    while (secondNumber != 0) {
        int temp = firstNumber % secondNumber;
        firstNumber = secondNumber;
        secondNumber = temp;
    }
    return firstNumber;
}

// Third task
int isHappyNumber(int number)
{
    int sumOfDigits = 0;
    int productDigits = 1;

    while (number > 0)
    {
        int digit = number % 10;
        sumOfDigits += digit;
        sumOfDigits += digit;
        productDigits *= digit;
        number /= 10;
    }
    return sumOfDigits == productDigits;
}

// Fourth task
int sumOfNumbers(int number)
{
    int sum = 0;
    for (int i = 0; i <= number; i++)
    {
        sum += i;
    }
    return sum;
}

void seminar_5(BOOL showFirstTask, BOOL showSecondTask, BOOL showThirdTask, BOOL showFourthTask)
{
    // First task
    if (showFirstTask)
    {
        int numberOfCage = 3;
        long long int grains = grainsOnSquare(numberOfCage);
        printf_s("On cage %d: %lld grains\n", numberOfCage, grains);

        numberOfCage = 28;
        grains = grainsOnSquare(numberOfCage);
        printf_s("On cage %d: %lld grains\n", numberOfCage, grains);
    }

    printf_s("\n");

    // Second task
    if (showSecondTask)
    {
        int firstNumber, secondNumber;
        printf_s("Enter two integer numbers with space: ");
        scanf_s("%d%d", &firstNumber, &secondNumber);
        int nodValue = nod(firstNumber, secondNumber);
        printf_s("Nod result of %d and %d is: %d\n", firstNumber, secondNumber, nodValue);
    }

    // Third task
    if (showThirdTask)
    {
        int number;
        printf_s("Enter a number: ");
        scanf_s("%d", &number);
        if (isHappyNumber(number)) printf_s("YES\n");
        else printf_s("NO\n");
    }

    // Fourth task
    if (showFourthTask)
    {
        int number;
        printf_s("Enter a number: ");
        scanf_s("%d", &number);
        int sum = sumOfNumbers(number);
        printf_s("Sum of numbers from 1 to %d is equal to: %d\n", number, sum);
    }
}
