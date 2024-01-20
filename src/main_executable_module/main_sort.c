#include "main_sort.h"

#include <stdio.h>
#include <stdlib.h>

void sort(double *data, int n) {
    double t;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                t = data[j];
                data[j] = data[j + 1];
                data[j + 1] = t;
            }
        }
    }
}
