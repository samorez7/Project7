#include <stdio.h>
#include <math.h>
#include <float.h> 

double f1(double x) {
    if (x <= -2) {
        return (1 - x) / (x + 1);
    }
    else if (x > -2 && x <= 1) {
        return x + sqrt(1 - x);
    }
    else {
        return x * x + 1;
    }
}

double f2(double x, double y) {
    return (x - 1) / (exp(y) + x + y);
}

int main() {
    double a1 = -5, b1 = 5, h1 = 0.2;

    double a2 = -5, b2 = 5, c2 = 1, d2 = 4, hx = 0.2, hy = 0.3;

    double max1 = -DBL_MAX, min1 = DBL_MAX; 
    double max2 = -DBL_MAX, min2 = DBL_MAX; 

    printf("������� ��� f1(x):\n");
    for (double x = a1; x <= b1; x += h1) {
        double value = f1(x);
        printf("x = %.2f, f1(x) = %.5f\n", x, value);
        if (value > max1) max1 = value;
        if (value < min1) min1 = value;
    }
    printf("�������� f1(x): %.5f, ̳����� f1(x): %.5f\n\n", max1, min1);

    printf("������� ��� f2(x, y):\n");
    for (double x = a2; x <= b2; x += hx) {
        for (double y = c2; y <= d2; y += hy) {
            double value = f2(x, y);
            printf("x = %.2f, y = %.2f, f2(x, y) = %.5f\n", x, y, value);
            if (value > max2) max2 = value;
            if (value < min2) min2 = value;
        }
    }
    printf("�������� f2(x, y): %.5f, ̳����� f2(x, y): %.5f\n", max2, min2);

    return 0;
}