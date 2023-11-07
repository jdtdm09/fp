/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */
void ex5(){

    int numero;

    do {
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &numero);

        if (numero <= 0) {
            printf("Por favor, digite um número maior que 0.\n");
        }
    } while (numero <= 0);

    printf("Números ímpares menores que %d em ordem decrescente:\n", numero);
    for (int i = numero - 1; i >= 1; i--) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}