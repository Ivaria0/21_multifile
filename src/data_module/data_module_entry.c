#include "data_process.h"
#include "../data_libs/data_io.h"
#include "../data_libs/data_stat.h"

#include <stdio.h>
#include <stdlib.h>

int main() {
    double *data;
    double n;
    int b = scanf("%lf", &n);
    if (((int)n == n) && (b == 1)) {
        data = malloc(n * sizeof(double));

        b = input(data, n);

        if (b == 0) {
            if (normalization(data, n))
                output(data, n);
            else
                printf("ERROR");
        } else {
            printf("ERROR");
        }
        free(data);
        data = NULL;
    } else {
        printf("ERROR");
    }
}
