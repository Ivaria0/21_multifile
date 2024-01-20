#include "data_stat.h"

#include <stdlib.h>

double max(double *data, int n) {
    double *p;
    p = data;
    double maxv = p[0];
    for (int i = 1; i < n; i++) {
        if (p[i] > maxv)
            maxv = p[i];
    }
    return maxv;
}

double min(double *data, int n) {
    double *p;
    p = data;
    double minv = p[0];
    for (int i = 1; i < n; i++) {
        if (p[i] < minv)
            minv = p[i];
    }
    return minv;
}

double mean(double *data, int n) {
    double t = 0;
        double *p;
        p = data;
        for (int i = 0; i < n; i++)
            t += p[i];
        t /= (double)n;
        return t;
}

double variance(double *data, int n) {
    double t;
        double var = 0;
        double *p;
        p = data;
        for (int i = 0; i < n; i++) {
            t = *p++;
            var += t * t;
        }
        var /= (double)n;
        double m = mean(data, n);
        var -= m * m;
        return var;
}
