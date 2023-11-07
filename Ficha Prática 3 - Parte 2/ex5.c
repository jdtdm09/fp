/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex5() {
    int votos[10] = {0}; // Inicializa um array para armazenar os votos (candidatos 1 a 5, votos nulos, votos em branco)
    int voto, total_votos = 0;

    while (1) {
        printf("Digite o código do voto (1 a 5 para candidatos, 0 para voto em branco, 9 para voto nulo, -1 para encerrar): ");
        scanf("%d", &voto);

        if (voto == -1) {
            break; // Encerra o loop quando o usuário digita -1
        }

        if (voto >= 0 && voto <= 9) {
            if (voto == 1 || voto == 2 || voto == 3 || voto == 4 || voto == 5 || voto == 0 || voto == 9) {
                votos[voto]++;
                total_votos++;
            } else {
                printf("Código de voto inválido. Tente novamente.\n");
            }
        } else {
            printf("Código de voto inválido. Tente novamente.\n");
        }
    }

    printf("Total de votos: %d\n", total_votos);

    for (int i = 1; i <= 5; i++) {
        printf("Candidato %d: %d votos (%.2f%%)\n", i, votos[i], (float)votos[i] / total_votos * 100);
    }

    printf("Votos em branco: %d votos (%.2f%%)\n", votos[0], (float)votos[0] / total_votos * 100);
    printf("Votos nulos: %d votos (%.2f%%)\n", votos[9], (float)votos[9] / total_votos * 100);

    return 0;
}
