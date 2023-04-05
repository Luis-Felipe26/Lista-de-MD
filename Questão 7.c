#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int gcd(int a, int b, int s, int t) {
    if (a == 0) {
        *s = 0;
        *t = 1;
        return b;
    }

    int s1, t1;
    int d = gcd(b % a, a, &s1, &t1);

    s = t1 - (b / a) s1;
    *t = s1;

    return d;
}

int mod_inverso(int a, int b) {
    int s, t;
    int d = gcd(a, b, &s, &t);

    if (d != 1) {
        return -1; 
    }
    else {
        return (s % b + b) % b;
    }
}

int main() {
    int a, b, inv;

    scanf("%d%d", &a, &b);

    inv = mod_inverso(a, b);

    if (inv == -1) {
        printf("O inverso de %d mod %d não existe.\n", a, b);
    }
    else {
        printf("O inverso de %d mod %d é: %d\n", a, b, inv);
    }

    return 0;
}
