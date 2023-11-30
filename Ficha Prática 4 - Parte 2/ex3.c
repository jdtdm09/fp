/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex3() {

    int m[3][3];
    int m2[3][3];


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Diga o valor da posição [%d][%d]", i, j);
            scanf("%d", &m[i][j]);
        }
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            m2[i][j] = m[j][i];
        }
    }


    printf("A matriz 1 é : ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    printf("A matriz 2 é : ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", m2[i][j]);
        }
        printf("\n");
    }
}