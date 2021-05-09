// Como ingresar  datos en C y mostrarlos en consola
#include<stdio.h>

int main (){

    /*Existen diferentes maneras de recibir valores de entrada. Algunas son para recibir valiores de un tipo de datoe specífico mientras
    que otras son de propósito general*/

    //Pidiendo valores
    printf("Entrada datos aqui:\n");

    char a = getchar(); // pide un valor tipo caracter
    /*Cuando se utiliza getchar() sólo se espera que el usuario agregue un único caracter. Lo demás lo va a ignorar*/
    char c[3];  /* Esta es la forma declarar strings, como un arreglo/vector de valores tipo char,esta vez de
    longitud 32.Puedes ajustar la longitud como prefieras, pero ten en cuenta que si ingresas datos que superen
    la longitud de */

    gets(c);

    printf("Primer char agregado es:%c\n",a);
    printf("Primer arreglo char agregado es:%s\n",c); //%s ya que un arreglo de char es un dato tipo string

    return 0;
}
