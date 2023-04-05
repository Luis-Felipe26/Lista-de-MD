int gcd(int a, int b, int s, intt) {
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

int main() {
    int a, b, s, t;

    scanf("%d%d", &a, &b);

    int d = gcd(a, b, &s, &t);

    printf("O MDC de %d e %d é: %d\n", a, b, d);
    printf("Os coeficientes S e T da combinação linear são: %d e %d\n", s, t);

    return 0;
}
