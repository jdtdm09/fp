/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex1(){
    char cargo;
    float vencimento_base, alimentacao, vencimento_liquido, retencao_irs, seguranca_social_func, seguranca_social_patronal;
    int dias_trabalhados;

    printf("Digite o código do funcionário (E para Empregado, C para Chefe, A para Administrador): ");
    scanf(" %c", &cargo);

    printf("Digite o número de dias trabalhados no mês: ");
    scanf("%d", &dias_trabalhados);

    switch (cargo) {
        case 'E':
            vencimento_base = 40.0;
            alimentacao = 7.5;
            break;
        case 'C':
            vencimento_base = 60.0;
            alimentacao = 7.5;
            break;
        case 'A':
            vencimento_base = 80.0;
            alimentacao = 60.0;
            break;
        default:
            printf("Cargo não reconhecido.\n");
            return 1;
    }

    // Vencimento bruto
    float vencimento_bruto = vencimento_base * dias_trabalhados + alimentacao * dias_trabalhados;

    // Retenção de IRS
    if (vencimento_bruto < 1000) {
        retencao_irs = 0.10 * vencimento_bruto;
    } else {
        retencao_irs = 0.20 * vencimento_bruto;
    }

    // Segurança social
    if (cargo == 'A') {
        seguranca_social_func = 0.09 * vencimento_bruto;
        seguranca_social_patronal = 0.21 * vencimento_bruto;
    } else {
        seguranca_social_func = 0.01 * vencimento_bruto;
        seguranca_social_patronal = 0.2375 * vencimento_bruto;
    }

    vencimento_liquido = vencimento_bruto - retencao_irs - seguranca_social_func;

    printf("a. Valor líquido a receber: %.2f euros\n", vencimento_liquido);
    printf("b. Total de subsídio de alimentação: %.2f euros\n", alimentacao * dias_trabalhados);
    printf("c. Valor da retenção de IRS a entregar ao estado: %.2f euros\n", retencao_irs);
    printf("d. Valor total a entregar à Segurança Social (encargos): %.2f euros\n", seguranca_social_func + seguranca_social_patronal);
    printf("e. Valor líquido a receber pelo funcionário: %.2f euros\n", vencimento_liquido - seguranca_social_patronal);
}