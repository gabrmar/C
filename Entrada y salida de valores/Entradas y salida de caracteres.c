// Como ingresar  datos en C y mostrarlos en consola
#include<stdio.h>

int main (){

    /*Existen diferentes maneras de recibir valores de entrada. Algunas son para recibir valiores de un tipo de dato specífico mientras
    que otras son de propósito general*/

    //Pidiendo valores de caracteres
    printf("Entrada datos aqui:\n");

    char a = getchar(); // pide un valor tipo caracter
    /*Cuando se utiliza getchar() sólo se espera que el usuario agregue un único caracter. Lo demás lo va a ignorar*/
    printf("Primer valor:");
    putchar(a); // imprime el valor 
    printf("\n"); // nueva línea

    return 0;
}
