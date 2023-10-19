/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */

void ex5(){
    int min1, seg1, min2, seg2, min3, seg3, min4, seg4, min5, seg5, totalminutos, totalsegundos, horas;
    
    printf("Insira a duração da primeira música: ");
    scanf("%d %d", &min1, &seg1);
    printf("Insira a duração da segunda música: ");
    scanf("%d %d", &min2, &seg2);
    printf("Insira a duração da terceira música: ");
    scanf("%d %d", &min3, &seg3);
    printf("Insira a duração da quarta música: ");
    scanf("%d %d", &min4, &seg4);
    printf("Insira a duração da quinta música: ");
    scanf("%d %d", &min5, &seg5);
    
    totalminutos = min1 + min2 + min3 + min4 + min5;
    totalsegundos = seg1 + seg2 + seg3 + seg4 + seg5;
    
    totalminutos += totalsegundos / 60;
    totalsegundos %= 60;
    
    horas = totalminutos / 60;
    totalminutos %= 60;
    
    printf("A duração deste albúm musical com 5 canções é de: %02d:%02d:%02d\n", horas, totalminutos, totalsegundos);    
}
