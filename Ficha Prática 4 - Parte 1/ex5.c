/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */
#include <stdio.h>
#include <stdlib.h>

void ex5() {

    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof (str1), stdin);
    puts(str1);

    printf("Digite a segunda string: ");
    fgets(str2, sizeof (str2), stdin);
    puts(str2);


    if ((strcmp(str1, str2)) == 0) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }
}