/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex4(){
    float nota1, nota2;
    
    printf("Digite a primeira nota (0 a 20): ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota (0 a 20): ");
    scanf("%f", &nota2);
    
    if (nota1 >= 0 && nota1 <= 20 && nota2 >= 0 && nota2 <= 20) {
        float media_ponderada = (0.4 * nota1) + (0.6 * nota2);
        
        printf("Média ponderada: %.2f\n", media_ponderada);
        
        if (media_ponderada >= 9.5) {
            printf("Aluno aprovado!\n");
        } else {
            printf("Aluno não aprovado.\n");
        }
    } else {
        printf("Valores fora do intervalo permitido. O cálculo não é possível.\n");
    }

    return 0;
}
