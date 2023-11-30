/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex4() {

    int mat[3][3];
    int menor, maior;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Diga o valore da posicao [%d][%d] : ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    menor = mat [0][0];
    maior = mat [0][0];


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat[i][j] < menor) {
                menor = mat[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat[i][j] > maior) {
                maior = mat[i][j];
            }
        }
    }

    printf("O menor é: %d", menor);
    printf("\nO maior é: %d", maior);


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}