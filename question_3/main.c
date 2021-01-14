//
// Created by an_de on 2021-01-14.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calculateSum(double *numbers, int len) {
    double sum = 0.0f;
    for(int i = 0; i < len; ++i) {
        sum += numbers[i];
    }
    return sum;
}

double calculateMean(double *numbers, int len) {
    return calculateSum(numbers, len) / len;
}

int main() {
    int amountOfNumbers = 0;
    printf("Enter the amount of numbers you want to calculate the standard deviation for: ");
    scanf("%d", &amountOfNumbers);

    double* numbers = malloc(amountOfNumbers * sizeof(int));
    if(numbers == NULL) {
        printf("Failed to allocate memory!\n");
        return -1;
    }

    // Get all numbers from the user.
    for(int i = 0; i < amountOfNumbers; ++i) {
        printf("Enter a number: ");
        scanf("%lf", &numbers[i]);
    }

    double temp = 0.0f;
    double mean = calculateMean(numbers, amountOfNumbers);
    for (int i = 0; i < amountOfNumbers; ++i) {
        // Formula used to calculate the standard deviation.
        temp += pow((numbers[i] - mean), 2);
    }
    double sdResult = sqrt(temp / amountOfNumbers);
    printf("Standard deviation: %lf", sdResult);

    // Free all the allocated memory to prevent memory leaks.
    free(numbers);
    return 0;
}