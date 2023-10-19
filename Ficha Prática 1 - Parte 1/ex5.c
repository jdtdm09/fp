/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */
void ex5(){
    int a = 2, b = 4, c = 3, d;
    d = (((a = a + 1) + ++b) * c++) % (2 * c);
    printf("%d, %d, %d, %d", a, b, c, d);
}
