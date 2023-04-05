#include <stdio.h>

int main() {
    int numero, fator = 2;

    scanf("%d", &numero);

    printf("Fatores primos de %d: ", numero);

    while (numero > 1) {

        int primo = 1;
        for (int i = 2; i < fator; i++) {
            if (fator % i == 0) {
                primo = 0;
                break;
            }
        }

        if (primo && numero % fator == 0) {
            printf("%d ", fator);
            numero /= fator;
        } else {
            fator++;
        }
    }

    return 0;
}
