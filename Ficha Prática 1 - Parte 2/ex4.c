/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex4(){
    double num1, num2, num3;
    
    printf("Insira o preço do 1 valor: ");
    scanf("%lf", &num1);
    printf("Insira o preço do 2 valor: ");
    scanf("%lf", &num2);
    printf("Insira o preço do 3 valor: ");
    scanf("%lf", &num3);
    
    printf("O valor total a pagar é: %lf\n", (num1 + num2 + num3) * 0.90);
}
