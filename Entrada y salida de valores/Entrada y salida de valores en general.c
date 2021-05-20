#include <stdio.h> // Librería de entradas y salidas

int main() {
    int a; 
    printf("Agrege un numero por favor:");
    scanf("%d", &a); /*scanf permite pedir datos al usuario y formatarlos de acuerdo a la necesidad. 
    En este caso está pidiendo una vairable entera*/
    printf("Valor agregado:%d", a); // imprimiendo valor

    return 0;
}