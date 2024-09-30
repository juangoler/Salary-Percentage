#include <stdio.h>

int main() {
    float salarios[15];
    int conta = 0;

    for (int i = 0; i < 15; i++) {
        printf("Digite o salário %d: ", i + 1);
        scanf("%f", &salarios[i]);
        if (salarios[i] >= 1500) {
            conta++;
        }
    }

    float porcentagem = (conta / 15.0) * 100;

    printf("Porcentagem de salários acima de 1500: %.2f%%\n", porcentagem);

    return 0;
}
