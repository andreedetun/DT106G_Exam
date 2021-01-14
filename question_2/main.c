//
// Created by an_de on 2021-01-14.
//

#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    printf("Enter x and y: ");
    scanf("%lf%lf", &x, &y);

    double a = (1 + y) / (2 -x);
    double b = sqrt(x) + sqrt(y) + pow(x, 2) + pow(y, 2);
    double c = exp(x -y);
    double d = fabs(pow(x, 2) - pow(y, 2));

    printf("1 + y / 2 - x: %lf\n", a);
    printf("sqrt(x) + sqrt(y) + x^2 + y^2: %lf\n", b);
    printf("e^x-y: %lf\n", c);
    printf("|x^2 - y^2|: %lf\n", d);
}