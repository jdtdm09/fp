/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex2(){
    int opcao;

    do {
        printf("Menu de opções:\n");
        printf("1. Criar\n");
        printf("2. Atualizar\n");
        printf("3. Eliminar\n");
        printf("4. Sair\n");
        printf("Escolha uma opção (1-4): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Opção escolhida: Criar\n");
                break;
            case 2:
                printf("Opção escolhida: Atualizar\n");
                break;
            case 3:
                printf("Opção escolhida: Eliminar\n");
                break;
            case 4:
                printf("Opção escolhida: Sair\n");
                break;
            default:
                printf("Opção inválida. Escolha uma opção válida (1-4).\n");
                break;
        }
    } while (opcao != 4);

    return 0;
}