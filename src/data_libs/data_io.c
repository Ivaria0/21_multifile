#include "data_io.h"
#include <stdio.h>
#include <stdlib.h>

int input(double *data, int n) {
    double v = 0;
    double *p;
    int b;
    p = data;
    for (int i = 0; i < n; i++) {
        b = scanf("%lf", &v);
        if (b == 1)
            *p++ = v;
        else
            return 1;
    }
    return 0;
}

void output(double *data, int n) {
    double *p;
    p = data;
    for (int i = 0; i < n; i++)
        printf("%.2lf ", *p++);
    printf("\b");
}
