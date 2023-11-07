/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

ex4(){
    int numero, i;
    int primo = 1; 

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("O número não é primo, pois deve ser maior que 1.\n");
        return 1;
    }

    for (i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            primo = 0; 
            break;
        }
    }

    if (primo) {
        printf("%d é um número primo.\n", numero);
    } else {
        printf("%d não é um número primo.\n", numero);
    }

    return 0;
}