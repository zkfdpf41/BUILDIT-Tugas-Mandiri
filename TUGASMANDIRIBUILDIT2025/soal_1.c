#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, i, hitung = 0, hari[1000];
    long long x[1000], total = 0, nilaiMax = -1;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%lld", &x[i]);
        total += x[i];
        if (x[i] > nilaiMax) nilaiMax = x[i];
    }

    for (i = 0; i < n; i++)
        if (x[i] == nilaiMax) hari[hitung++] = i + 1;

    printf("Max : %lld\n", nilaiMax);
    printf("Count : %d\n", hitung);
    printf("days :");
    for (i = 0; i < hitung; i++) printf(" %d", hari[i]);
    printf ("\n");
    printf("\nPercentage : %.3f%%\n", total ? (nilaiMax * hitung * 100.0 / total) : 0.0);

    return 0;
}
