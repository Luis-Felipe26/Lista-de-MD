#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int mod_inverso(int a, int m) {
    int m0 = m, t, q;
    int x0 = 0, x1 = 1;

    if (m == 1) {
        return 0;
    }

    while (a > 1) {

        q = a / m;
        t = m;

        m = a % m;
        a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }


    if (x1 < 0) {
        x1 += m0;
    }

    return x1;
}

int main() {
    int a, b, m, x;


    scanf("%d %d %d", &a, &b, &m);

    int gcd_a_m = gcd(a, m);

    if (gcd_a_m != 1) {
        printf("Não há solução. m não é coprimo com a.\n");
        return 0;
    }

    int a_inverso = mod_inverso(a, m);

    x = (a_inverso * b) % m;

    printf("Solução: x = %d\n", x);

    return 0;
}
