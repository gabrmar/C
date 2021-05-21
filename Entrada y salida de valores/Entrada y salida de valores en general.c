#include <stdio.h> // Librería de entradas y salidas

int main() {
    
    int a, b, c, x; // variables enteras
    float num; // variable con parte decimal
    char text[5]; /* arreglo de caracteres  de 5 unidades máximo. Al parecer esta variable puede
    tomar más valores de los definidos por la variable parece alterar la forma en que los datos
    son guardados y por ende almacenando valores difernetes. Es más, parece que cuando se llena
     el arreglo de caracteres esto llega a afectar un poco la exactitud de los valores flotantes
     guardados(ésto último requiere más revisión)*/  
    printf("Agrege un numero por favor:");
    scanf("%d", &a); /*scanf permite pedir datos al usuario y formatarlos de acuerdo a la necesidad. 
    En este caso está pidiendo una vairable entera. Es importante colocar el símbolo & junto con la
    variable a utilizar para poder indicar en qué dirección de memoria será guardado el valor. En C,
    el símbolo & es conocido como operador de dirección. Scanf guarda valores es en direcciones de
    memoria.*/
    printf("Valor agregado:%d\n", a); // imprimiendo valor
    printf("Ahora agreguemos dos numeros adicionales:");
    scanf("%d %d", &b, &c);
    printf("La suma de los dos valores agregados es %d\n", b+c);
    printf("---------------------Continuando-------------------------\n");
    printf("Ahora agrega un numero entero, uno decimal y un texto:");
    scanf("%d %f %s", &x, &num, text); // nótese que el arreglo de caracteres no pide dirección de memoria
    //Esto se debe a que la variable de arreglo de actacteres actúa como apuntador de memoria
    printf("Valores guardados:%d, %f, %s",x ,num, text);

    /*Acciones siguientes
    
    Colocar por este medio los parametros claves de la función scanf()

    */
    


    return 0;
}