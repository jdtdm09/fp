/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex1(){
    char operacao;
    float valor1, valor2, resultado;
    char continuar;

    do {
        printf("Digite o primeiro valor: ");
        scanf("%f", &valor1);
        printf("Digite o segundo valor: ");
        scanf("%f", &valor2);
        printf("Digite a operação (+, -, *, /): ");
        scanf(" %c", &operacao);  // O espaço antes de %c é importante para consumir a quebra de linha anterior

        switch (operacao) {
            case '+':
                resultado = valor1 + valor2;
                break;
            case '-':
                resultado = valor1 - valor2;
                break;
            case '*':
                resultado = valor1 * valor2;
                break;
            case '/':
                if (valor2 != 0) {
                    resultado = valor1 / valor2;
                } else {
                    printf("Erro: Divisão por zero.\n");
                    resultado = 0;  // Defina um valor padrão em caso de divisão por zero
                }
                break;
            default:
                printf("Operação inválida. Realizando soma por padrão.\n");
                resultado = valor1 + valor2;
        }

        // Exibe o resultado
        printf("Resultado: %.2f\n", resultado);

        printf("Deseja continuar? (introduza s/n): ");
        scanf(" %c", &continuar);  

    } while (continuar == 's' || continuar == 'S');

    return 0;
}