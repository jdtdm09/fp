/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex1(){
    char letra;
    
    printf("Insira um caracter: ");
    scanf("%c", &letra);
    
    char antecessor = letra - 1;
    char sucessor = letra + 1;
    
    printf("O antecessor de '%c' é '%c' e o sucessor é '%c'\n", letra, antecessor, sucessor);
}