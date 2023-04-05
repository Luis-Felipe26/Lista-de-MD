#include <stdio.h>
#include <stdlib.h>

int extended_gcd(int a, int b, int x, inty) {
    if (a == 0) {
        *x = 0;
        *y = 1;
        return b;
    }
    int x1, y1;
    int gcd = extended_gcd(b % a, a, &x1, &y1);
    x = y1 - (b / a) x1;
    y = x1;
    return gcd;
}

int teorema_chines(int a[], int m[], int n) {
    int M = 1;
    for (int i = 0; i < n; i++) {
        M= m[i];
    }
    for (int i = 0; i < n; i++) {
        if (M / m[i] == 1) {
            continue;
        }
        if (extended_gcd(m[i], M / m[i], NULL, NULL) != 1) {
            return -1;
        }
    }
    int b[n];
    for (int i = 0; i < n; i++) {
        b[i] = M / m[i];
    }
    int v[n];
    for (int i = 0; i < n; i++) {
        int x, y;
        extended_gcd(b[i], m[i], &x, &y);
        v[i] = x;
    }
    int x = 0;
    for (int i = 0; i < n; i++) {
        x += a[i] * b[i] * v[i];
    }
    return x % M;
}

int main() {
    int n;

    scanf("%d", &n);
    int a = (int) malloc(n * sizeof(int));
    int m = (int) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {

        scanf("%d", &a[i]);

        scanf("%d", &m[i]);
    }
    int x = teorema_chines(a, m, n);
    if (x == -1) {
        printf("Os módulos não são coprimos.\n");
    } else {
        printf("A solução é: %d\n", x);
    }
    free(a);
    free(m);
    return 0;
}
