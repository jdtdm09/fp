/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex4() {

    int a[4][4] = {
        {1, 2, 3, 4},
        {7, 8, 9, 0},
        {1, 1, 1, 1},
        {3, 3, 3, 3}
    };

    for (int i = 0; i < 4 / 2; i++) {
        for (int j = i; j < 4 - i - 1; j++) {

            int temp = a[i][j];
            a[i][j] = a[4 - 1 - j][i];
            a[4 - 1 - j][i] = a[4 - 1 - i][4 - 1 - j];
            a[4 - 1 - i][4 - 1 - j] = a[j][4 - 1 - i];
            a[j][4 - 1 - i] = temp;
        }
    }



    printf("A matriz depois de 90 graus:\n ");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", a[i][j]);
        }
    }
}