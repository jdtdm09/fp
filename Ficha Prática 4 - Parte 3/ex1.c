/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex1() {

    int diasArray[12];
    float valorIliquidoArray[12], valorATirarDoIRSArray[12], valorParaEntidadePatronalArray[12], valorLiquidoArray[12], valorSubsidioAlimentacaoArray[12];
    float segurancaSocialArray[12], totalAPagarVencimentoArray[12], totalAPagarSubsidiosArray[12], totalAPagarImpostosArray[12];
    float valorLiquidoTodosMeses = 0, encargoTotalTodosMeses = 0;
    int codigoFuncionario, dias;
    char cargo, op;

    do {
        do {
            printf("Diga o seu código de funcionário: ");
            scanf("%d", &codigoFuncionario);
        } while (codigoFuncionario < 0);

        do {
            printf("Diga o seu cargo de trabalho --> E - empregado  C - chefe  A - administrador: ");
            scanf(" %c", &cargo);
        } while (cargo != 'E' && cargo != 'C' && cargo != 'A');


        for (int i = 0; i < 12; i++) {
            do {
                printf("Diga o número de dias que trabalhou para o mês %d: ", i + 1);
                scanf("%d", &dias);

                if (dias < 0) {
                    printf("O número de dias não pode ser negativo. Tente novamente.\n");
                }
                if (dias > 31) {
                    printf("O número de dias não pode ser maior que 31. Tente novamente.\n");
                }
            } while (dias < 0 || dias > 31);

            diasArray[i] = dias;
        }


        switch (cargo) {
            case 'E':
                for (int i = 0; i < 12; i++) {
                    valorIliquidoArray[i] = 40 * diasArray[i];
                    valorSubsidioAlimentacaoArray[i] = diasArray[i] * 5;
                }
                break;
            case 'C':
                for (int i = 0; i < 12; i++) {
                    valorIliquidoArray[i] = 60 * diasArray[i];
                    valorSubsidioAlimentacaoArray[i] = diasArray[i] * 7.5;
                }
                break;
            case 'A':
                for (int i = 0; i < 12; i++) {
                    valorIliquidoArray[i] = 80 * diasArray[i];
                    valorSubsidioAlimentacaoArray[i] = diasArray[i] * 7.5;
                }
                break;
            default:
                printf("Inseriu um cargo inválido\n");
                break;
        }

        for (int i = 0; i < 12; i++) {
            totalAPagarVencimentoArray[i] = 0;
            totalAPagarSubsidiosArray[i] = 0;
            totalAPagarImpostosArray[i] = 0;
        }


        for (int i = 0; i < 12; i++) {

            valorATirarDoIRSArray[i] = 0;
            segurancaSocialArray[i] = 0;
            for (int irs = 0; irs <= valorATirarDoIRSArray[i]; irs++) {
                if (valorIliquidoArray[i] < 1000) {
                    valorATirarDoIRSArray[i] = valorIliquidoArray[i] * 0.1;
                } else if (valorIliquidoArray[i] >= 1000) {
                    valorATirarDoIRSArray[i] = valorIliquidoArray[i] * 0.2;
                } else {
                    valorATirarDoIRSArray[i] = valorIliquidoArray[i] * 0.3;
                }
            }
        }


        for (int i = 0; i < 12; i++) {
            for (int um = 1; um <= 1; um++) {
                if (cargo == 'A') {
                    segurancaSocialArray[i] = valorIliquidoArray[i] * 0.09;
                    valorParaEntidadePatronalArray[i] = valorIliquidoArray[i] * 0.21;
                } else {
                    segurancaSocialArray[i] = valorIliquidoArray[i] * 0.11;
                    valorParaEntidadePatronalArray[i] = valorIliquidoArray[i] * 0.2375;
                }
            }
        }


        for (int i = 0; i < 12; i++) {
            for (int dia = 1; dia <= diasArray[i]; dia++) {
                if (dia > 20) {
                    valorIliquidoArray[i] += valorIliquidoArray[i] * 0.05;
                } else if (dia > 17) {
                    valorIliquidoArray[i] += valorIliquidoArray[i] * 0.02;
                }
            }
        }

        for (int i = 0; i < 12; i++) {
            valorLiquidoArray[i] = valorIliquidoArray[i] + valorSubsidioAlimentacaoArray[i] - valorATirarDoIRSArray[i] - segurancaSocialArray[i];
        }

        for (int i = 0; i < 12; i++) {
            printf("\nO valor ilíquido do mes %d é: %.2f", i, valorIliquidoArray[i]);
            printf("\nO valor do subsídio de alimentação do mes %d é: %.2f", i, valorSubsidioAlimentacaoArray[i]);
            printf("\nO valor a pagar ao estado de IRS do mes %d é: %.2f", i, valorATirarDoIRSArray[i]);
            printf("\nO valor da Segurança Social do mes %d é: %.2f", i, segurancaSocialArray[i]);
            printf("\nO valor da entidade Patronal do mes %d é: %.2f", i, valorParaEntidadePatronalArray[i]);
            printf("\nO valor líquido do mes %d é: %.2f\n", i, valorLiquidoArray[i]);

            totalAPagarVencimentoArray[i] += valorLiquidoArray[i];
            totalAPagarSubsidiosArray[i] += valorSubsidioAlimentacaoArray[i];
            totalAPagarImpostosArray[i] += valorATirarDoIRSArray[i] + segurancaSocialArray[i] + valorParaEntidadePatronalArray[i];
            printf("\nTotal a pagar de salário aos funcionários no mes %d : %.2f", i, totalAPagarVencimentoArray[i]);
            printf("\nTotal a pagar de subsidios no mes %d: %.2f", i, totalAPagarSubsidiosArray[i]);
            printf("\nTotal a pagar de impostos no mes %d: %.2f", i, totalAPagarImpostosArray[i]);
        }

        printf("\nO funcionário %d teve um valor liquido total de:", codigoFuncionario);
        for (int i = 0; i < 12; i++) {
            valorLiquidoTodosMeses += valorLiquidoArray[i];
        }
        printf("%.2f", valorLiquidoTodosMeses);



        printf("\nA empresa vai ter um encargo total de todos os meses de :");
        for (int i = 0; i < 12; i++) {
            encargoTotalTodosMeses += valorLiquidoArray[i];
            encargoTotalTodosMeses += totalAPagarSubsidiosArray[i];
            encargoTotalTodosMeses += totalAPagarImpostosArray[i];
        }
        printf("%.2f", encargoTotalTodosMeses);



        printf("\nQuer fazer outro calculo? Diga s/S");
        scanf(" %c", &op);
    } while (op == 's' || op == 'S');
}