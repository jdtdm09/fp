/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex1() {

    int array[10];
    int par = 0;
    for (int i = 0; i < 10; i++) {
        printf("Diga o valor %d : ", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (array[i] % 2 == 0 && array[i] > par) {
            par = array[i];
        }
    }

    if (par != 0) {
        printf("O maior valor par é: %d\n", par);
    } else {
        printf("Não existe valor par.\n");
    }
}