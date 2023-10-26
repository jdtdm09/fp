/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

int ex1() {
    char opcao;
    int numero1, numero2;

    printf("Insira o 1º número:");
    scanf("%d", &numero1);
    printf("Insira o 2º numero:");
    scanf("%d", &numero2);

    if (numero1 >= 0 && numero2 >= 0) {

        printf("Insira a operação:");
        scanf(" %c", &opcao);

        switch (opcao) {
            case '+':
                printf("O resultado da soma é %d", numero1 + numero2);
                break;
            case '-':
                printf("O resultado da subtração é %d", numero1 - numero2);
                break;
            case '*':
                printf("O resultado da multiplicação é %d", numero1 * numero2);
                break;
            case '/':
                if (numero2 != 0) {
                    printf("O resultado da divisão é %lf", numero1 / (double) numero2);
                } else {
                    printf("O divisor tem de ser diferente de 0.");
                }
                break;
            default: printf("Operação inválida.");
        }

    } else {
        printf("Nesta calculadora apenas numeros positivos são permitidos!!");
    }

    return 0;
}