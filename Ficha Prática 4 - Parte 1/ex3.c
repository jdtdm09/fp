/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex3(){
    
    int array[4][5];
    int num, count = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Diga os valores de [%d][%d]: ", i, j);
            scanf(" %d", &array[i][j]);
        }
    }

    printf("Diga o número que quer encontrar: ");
    scanf(" %d", &num);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (array[i][j] == num) {
                count++;
            }
        }
    }

    printf("O número de vezes que aparece na matriz é %d vezes", count);

}