/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex1(){ 
    int numero1, numero2;
    
    printf("Insira o primeiro número: ");
    scanf("%d", &numero1);
    printf("Insira o segundo número: ");
    scanf("%d", &numero2);
    
    if(numero1 > numero2){
        printf ("O maior número é: %d\n", numero1);
        printf ("Ordem: %d %d", numero1, numero2);
    } else {
        printf ("O maior número é: %d\n", numero2);
        printf ("Ordem: %d %d", numero2, numero1);
    }
}