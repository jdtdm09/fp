/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex3(){
    int num1, num2;
    double total_soma, total_subtracao, total_multiplicacao, total_divisao;
    
    printf("1º número: ");
    scanf("%d", &num1);
    printf("2º número: ");
    scanf("%d", &num2);
    total_soma = num1 + num2;
    total_subtracao = num1 - num2;
    total_multiplicacao = num1 * num2;
    total_divisao = num1 / num2;
    
    printf("Total da Soma: %lf\n", total_soma);
    printf("Total da Subtração: %lf\n", total_subtracao);
    printf("Total da Multiplicação: %lf\n", total_multiplicacao);
    printf("Total da Divisão: %lf\n", total_divisao);
}
