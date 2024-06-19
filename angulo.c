#include <stdio.h>
#include <string.h>

int direcao_para_angulo(const char* direcao) {
    if (strcmp(direcao, "norte") == 0) {
        return 0;
    } else if (strcmp(direcao, "leste") == 0) {
        return 90;
    } else if (strcmp(direcao, "sul") == 0) {
        return 180;
    } else if (strcmp(direcao, "oeste") == 0) {
        return 270;
    }
    return -1;
}

int main() {
    char direcao_atual[10], direcao_oasis[10];

    printf("Digite a direcao atual e a direcao do oasis (ex: norte sul): ");
    scanf("%s %s", direcao_atual, direcao_oasis);

    int angulo_atual = direcao_para_angulo(direcao_atual);
    int angulo_oasis = direcao_para_angulo(direcao_oasis);

    int diferenca_direta = abs(angulo_oasis - angulo_atual);
    
    int menor_diferenca = diferenca_direta <= 180 ? diferenca_direta : 360 - diferenca_direta;

    printf("%d\n", menor_diferenca);

    return 0;
}
