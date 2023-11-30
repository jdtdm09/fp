/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex2() {


    int tamanhoMatriz;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanhoMatriz);

    int array[tamanhoMatriz];
    int count = 0;
    int num = 2;

    while (count < tamanhoMatriz) {
        int prime = 1;

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                prime = 0;
                break;
            }
        }

        if (prime == 1) {
            array[count] = num;
            count++;
        }

        num++;
    }

    printf("O array é: ");
    for (int i = 0; i < tamanhoMatriz; i++) {
        printf("%d ", array[i]);
    }
}