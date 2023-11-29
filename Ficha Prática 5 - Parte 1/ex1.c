/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex1() {
    int quantidade;
    printf("Digite um valor inteiro: ");
    scanf("%d", &quantidade);

    printf("Linha de asteriscos: ");
    for (int i = 0; i < quantidade; i++) {
        printf("*");
    }
    printf("\n");
}