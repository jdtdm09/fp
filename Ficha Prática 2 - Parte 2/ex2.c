/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex2() {
    double saldo, montante;
    char operacao;
    
    printf("Insira o seu saldo: ");
    scanf("%lf", &saldo);
    printf("Deseja creditar (C) ou debitar (D) na sua conta? ");
    scanf(" %c", &operacao); // Adicione um espaço em branco antes de %c para ignorar espaços em branco indesejados
    printf("Insira o montante: ");
    scanf("%lf", &montante);

    if (operacao == 'C' || operacao == 'c') {
        saldo = saldo + montante;
        printf("Operação de crédito bem-sucedida. Saldo atual da conta: %.2lf\n", saldo);
    } else if (operacao == 'D' || operacao == 'd') {
        if (saldo - montante >= 0) {
            saldo = saldo - montante;
            printf("Operação de débito bem-sucedida. Saldo atual da conta: %.2lf\n", saldo);
        } else {
            printf("Operação de débito não é possível. O saldo ficaria negativo.\n");
        }
    } else {
        printf("Operação inválida. Escolha 'C' para crédito ou 'D' para débito.\n");
    }
}