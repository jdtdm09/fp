/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex5_1(){
    int a = 1;
    
    if (a == 1) {
    printf("O valor é um");
    } else if (a == 2) {
    printf("O valor é dois");
    } else if (a == 3) {
    printf("O valor é três");
    }
}


void ex5_2(){
    int a = 1;

    switch (a) {
        case 1:
            printf("O valor é um");
            break;
        case 2:
            printf("O valor é dois");
            break;
        case 3:
            printf("O valor é três");
            break;
        default:
            printf("O valor não é um, dois ou três");
    }
}