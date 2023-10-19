/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex1(){
    int codigoFuncionario, diasTrabalho;
    double vencimentoBase = 40.0; // Vencimento base por dia
    double subsidioAlimentacao = 5.0; // Subsídio de alimentação por dia
    double retencaoIRS = 0.10; // Retenção de IRS (10%)
    double segurancaSocialFuncionario = 0.11; // Taxa de encargo da Segurança Social do funcionário (11%)
    double segurancaSocialPatronal = 0.2375; // Taxa de encargo da Segurança Social da entidade patronal (23.75%)

    printf("Inserir o código do funcionário: ");
    scanf("%d", &codigoFuncionario);
    printf("Inserir o número de dias de trabalho no mês: ");
    scanf("%d", &diasTrabalho);

    double valorIlíquido = vencimentoBase * diasTrabalho;
    double totalSubsidioAlimentacao = subsidioAlimentacao * diasTrabalho;
    double retencaoIRSaEntregar = valorIlíquido * retencaoIRS;
    double segurancaSocialTotal = (segurancaSocialFuncionario + segurancaSocialPatronal) * valorIlíquido;
    double valorLíquido = valorIlíquido - retencaoIRSaEntregar - segurancaSocialFuncionario;

    printf("Código do Funcionário: %d\n", codigoFuncionario);
    printf("Valor ilíquido a receber: %.2f€\n", valorIlíquido);
    printf("Total subsídio de alimentação: %.2f€\n", totalSubsidioAlimentacao);
    printf("Valor da retenção de IRS a entregar ao estado: %.2f€\n", retencaoIRSaEntregar);
    printf("Valor total a entregar à Segurança Social: %.2f€\n", segurancaSocialTotal);
    printf("Valor líquido a receber pelo funcionário: %.2f€\n", valorLíquido);
}