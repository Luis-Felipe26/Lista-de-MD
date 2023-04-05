#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void fatores_primos(int n, int fatores[]) {
    int factor = 2, i = 0;
    while (n > 1) {
        if (n % factor == 0) {
            fatores[i++] = factor;
            n /= factor;
        } else {
            factor++;
        }
    }
    fatores[i] = 0;
}

int gcd(int a, int b) {
    int fatores_a[100] = {0}, fatores_b[100] = {0}, i = 0, j = 0, gcd = 1;

    fatores_primos(a, fatores_a);
    fatores_primos(b, fatores_b);

    while (fatores_a[i] != 0 && fatores_b[j] != 0) {
        if (fatores_a[i] == fatores_b[j]) {
            gcd = fatores_a[i];
            i++;
            j++;
        } else if (fatores_a[i] < fatores_b[j]) {
            i++;
        } else {
            j++;
        }
    }
    return gcd;
}

int lcm(int a, int b) {
    int fatores_a[100] = {0}, fatores_b[100] = {0}, i = 0, j = 0, lcm = 1;

    fatores_primos(a, fatores_a);
    fatores_primos(b, fatores_b);

    while (fatores_a[i] != 0 && fatores_b[j] != 0) {
        if (fatores_a[i] == fatores_b[j]) {
            lcm= fatores_a[i];
            i++;
            j++;
        } else if (fatores_a[i] < fatores_b[j]) {
            lcm = fatores_a[i];
            i++;
        } else {
            lcm= fatores_b[j];
            j++;
        }
    }

    while (fatores_a[i] != 0) {
        lcm = fatores_a[i];
        i++;
    }

    while (fatores_b[j] != 0) {
        lcm= fatores_b[j];
        j++;
    }

    return lcm;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    printf("MDC de %d e %d é: %d\n", a, b, gcd(a, b));
    printf("MMC de %d e %d é: %d\n", a, b, lcm(a, b));

    return 0;
}
