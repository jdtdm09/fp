/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex2(){
    double num1, num2, num3;
    
    printf("Insira o primeiro valor: ");
    scanf("%lf", &num1);
    printf("Insira o segundo valor: ");
    scanf("%lf", &num2);
    printf("Insira o terceiro valor: ");
    scanf("%lf", &num3);
    printf("A média dos 3 valores é: %lf\n", (num1 + num2 + num3) / 3);
    printf("A média ponderada dos 3 valores é: %lf", (num1 * 0.2) + (num2 * 0.3) + (num3 * 0.5));
}
