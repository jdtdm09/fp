/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex1(){
    
    float precos[10];
    float total = 0.0;
    
    
    for (int i = 0; i < 10; i++) {
        printf("Digite o preço do produto %d: ", i + 1);
        scanf("%f", &precos[i]);

        total += precos[i];
    }
    
    printf("\nTotal: €%.2f\n", total);
}