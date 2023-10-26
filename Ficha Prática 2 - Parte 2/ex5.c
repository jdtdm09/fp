/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

ex5(){
    float x, y;

    printf("Digite a coordenada x: ");
    scanf("%f", &x);
    printf("Digite a coordenada y: ");
    scanf("%f", &y);

    if (x == 0 && y == 0) {
        printf("O ponto está na origem (0,0).\n");
    } else if (x == 0) {
        printf("O ponto está sobre o eixo y.\n");
    } else if (y == 0) {
        printf("O ponto está sobre o eixo x.\n");
    } else if (x > 0 && y > 0) {
        printf("O ponto está no primeiro quadrante.\n");
    } else if (x < 0 && y > 0) {
        printf("O ponto está no segundo quadrante.\n");
    } else if (x < 0 && y < 0) {
        printf("O ponto está no terceiro quadrante.\n");
    } else {
        printf("O ponto está no quarto quadrante.\n");
    }

    return 0;
}