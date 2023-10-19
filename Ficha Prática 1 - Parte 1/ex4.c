/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */
#define PI 3.14159265358979323

void ex4_r(){
    double num1, num2;
    
    printf("Insira o comprimento do retângulo: ");
    scanf("%lf", &num1);
    printf("Insira a largura do retângulo: ");    
    scanf("%lf", &num2);
    printf("A área do retângulo é de: %lf\n", ( num1 * num2));
    printf("O perímetro do retângulo é de: %lf\n", ((num1 * 2) + (num2 * 2)));
}

void ex4_c(){
    double num1;
    
    printf("Insira o diâmetro da circunferência: ");
    scanf("%lf", &num1);
    
    double raio = num1 / 2;
 
    printf("A área do retângulo é de: %lf\n", (raio * raio) * (double) PI);
}

void ex4_t(){
    double num1, num2;
    
    printf("Insira o comprimento da base do triângulo: ");
    scanf("%lf", &num1);
    printf("Insira o comprimento da altura do triângulo: ");
    scanf("%lf", &num2);
    
    printf("A área triângulo é de: %lf\n", (num1 * num2) / 2); 
}