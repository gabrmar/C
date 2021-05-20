#include <stdio.h> // Librería de entradas y salidas

int main() {
    
    int a, b, c; 
    printf("Agrege un numero por favor:");
    scanf("%d", &a); /*scanf permite pedir datos al usuario y formatarlos de acuerdo a la necesidad. 
    En este caso está pidiendo una vairable entera. Es importante colocar el símbolo & junto con la
    variable a utilizar para poder indicar en qué dirección de memoria será guardado el valor. En C,
    el símbolo & es conocido como operador de dirección. Scanf guarda valores es en direcciones de
    memoria.*/
    printf("Valor agregado:%d\n", a); // imprimiendo valor
    printf("Ahora agreguemos dos valores adicionales:");
    scanf("%d %d", &b, &c);
    printf("La suma de los dos valores agregados es %d", b+c);


    return 0;
}