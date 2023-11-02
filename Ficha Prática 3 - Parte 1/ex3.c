/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex3(){
char opcao;

    printf("Escolha a opção ('M' para maiúsculas, 'm' para minúsculas): ");
    scanf(" %c", &opcao);

    if (opcao == 'M' || opcao == 'm') {
        char inicio, fim;

        if (opcao == 'M') {
            inicio = 'A';
            fim = 'Z';
        } else {
            inicio = 'a';
            fim = 'z';
        }

        for (char letra = inicio; letra <= fim; letra++) {
            printf("%c ", letra);
        }

        printf("\n");
    } else {
        printf("Opção inválida. Use 'M' ou 'm'.\n");
    }

    return 0;
}