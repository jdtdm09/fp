/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex2(){ 
    int numero1, numero2, numero3;
    
    printf("Insira o primeiro número: ");
    scanf("%d", &numero1);
    printf("Insira o segundo número: ");
    scanf("%d", &numero2);
    printf("Insira o terceiro número: ");
    scanf("%d", &numero3);
    
    if (numero1 < numero2 && numero1 < numero3) {
        printf("O menor número é: %d\n", numero1);
    } else if (numero2 < numero3) {
        printf("O menor número é: %d\n", numero2);
    } else {
        printf("O menor número é: %d\n", numero3);
    }
}