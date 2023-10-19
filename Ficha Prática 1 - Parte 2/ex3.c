/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex3(){
    int valor1, valor2;
    
    printf("Insira o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Insira o segundo valor: ");
    scanf("%d", &valor2);
    
    valor1 ^= valor2;
    valor2 ^= valor1;
    valor1 ^= valor2;
    
    printf("O primeiro valor é %d e o segundo valor é %d", valor1, valor2);
}