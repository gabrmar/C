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

    /*
    Como se puede apreciar cuando se usa la función scanf() y la función printf(), la combinación del signo
    de % más una letra se usa para especificar que tipo de dato se pedirá o se imprimirá en pantalla. Como
    referencia, aquí está la siguinte lista de letras para indicar tipos de datos:

    - d para enteros
    - c para un caracter
    - f para números de punto flotante, es decir con parte decimal 
    - x para indicar el formato decimal

    A esto se le conoce como caracteres de escape.

    Otro aspecto importante que podemos hacer para definir los datos de entrada es delimitar un tamaño máximo
    o ignorar algunos de los campos para pedir menos datos de los que el código permite. La estuctura genral 
    para el scanf() es la siguiente: 

    %[*][max_field]conversion character
    * evita que ese campo sea llenado por datos
    max_field puede ser un número cualquiera que limita el tamaño del dato que será guardado en ese campo. 
    Eso se puede usar para reducir la cantidad de decimales que serán guardados en una variable float o
    limiar el número de caracteres que se guardarán en un arreglo de caracteres.

    -------Contiuar esta parte cuando hayan ejemplos más concretos del uso del * y el max_field-------

    */
    
    /* 
    Por otro lado, printf() también cuenta es con caracteres de escape para ajustar su salida a distintas
    necesidades. A continuación  está una lista de sus caracteres de escape:

    \n nueva línea
    \t sangría (tab) horizontal
    \\ backslash
    \b retroseo (backspace)
    \' comilla simple
    \" comilla doble

    La estructural general para printf() es la siguiente:%[-][width].[precision]conversion character 
    
    -------Contiuar esta parte cuando hayan ejemplos más concretos-------


    */


    return 0;
}