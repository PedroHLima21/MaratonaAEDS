#include <stdio.h>

int main() {
    int cartas[5];
    
    printf("Digite os valores das cinco cartas (valores distintos entre 1 e 13): ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &cartas[i]);
    }

    int crescente = 1;   
    int decrescente = 1;  

    for (int i = 0; i < 4; i++) {
        if (cartas[i] >= cartas[i + 1]) {
            crescente = 0; 
            break;
        }
    }

    for (int i = 0; i < 4; i++) {
        if (cartas[i] <= cartas[i + 1]) {
            decrescente = 0; 
            break;
        }
    }

    if (crescente) {
        printf("C\n");
    } else if (decrescente) {
        printf("D\n");
    } else {
        printf("N\n");
    }

    return 0;
}
