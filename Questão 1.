#include <stdio.h>
#include <stdbool.h>

int main() {
    int numero;
    bool primo = true;


    scanf("%d", &numero);


    if (numero <= 1) {
        primo = false;
    }


    for (int i = 2; i < numero; i++) {
        if (numero % i == 0) {
            primo = false;
            break;
        }
    }

    if (primo) {
        printf("%d é primo.\n", numero);
    } else {
        printf("%d não é primo.\n", numero);
    }

    return 0;
}
