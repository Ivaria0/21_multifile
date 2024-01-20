#include "decision.h"
#include "../data_libs/data_io.h"
#include "../data_libs/data_stat.h"

#include <stdio.h>
#include <stdlib.h>

int main() {
    double *data;
    double n;

    int b = scanf("%lf", &n);
    if (((int)n == n) && (n > 0) && (b == 1)) {
        data = malloc(n * sizeof(double));

        b = input(data, n);

        if (b == 0) {
            if (make_decision(data, n))
                printf("YES");
            else
                printf("NO");
        } else {
            printf("ERROR");
        }
        free(data);
        data = NULL;
    } else {
        printf("ERROR");
    }
}
