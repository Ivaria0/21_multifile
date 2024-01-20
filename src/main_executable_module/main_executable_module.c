#include "main_sort.h"
#include "../data_module/data_process.h"
#include "../yet_another_decision_module/decision.h"
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
        printf("LOAD DATA...\n");
        b = input(data, n);

        if (b == 0) {
            printf("RAW DATA:\n\t");
            output(data, n);

            printf("\nNORMALIZED DATA:\n\t");
            normalization(data, n);
            output(data, n);

            printf("\nSORTED NORMALIZED DATA:\n\t");
            sort(data, n);
            output(data, n);

            printf("\nFINAL DECISION:\n\t");
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
