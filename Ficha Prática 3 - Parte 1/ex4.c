/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex4(){
    int numero;
    int soma = 0;
    int contador = 0;

    printf("Digite valores numéricos (0 para sair):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        soma += numero;
        contador++;
    }

    if (contador > 0) {
        float media = (float)soma / contador;
        printf("A média dos valores inseridos é : %.2f\n", media);
    } else {
        printf("Nenhum valor foi inserido.\n");
    }

    return 0;
}
