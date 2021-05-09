//Variables y constantes en C
#include<stdio.h>

int x = 12,y = 9; // estos valores pueden ser modifixcados por acción del código
const int k = 24; // este valor no puede ser alterado por acción del código. Intentarlo produciría un error  
int main (){
    
    #define letter 'X' // Puedes usar #define  como otra forma de definir constantes. mira que no es necesario el signo de igual ni
    // punto y coma ni tampoco usar el signo igual para asignar un valor a letter 

    /*NOTA: los comandos con # se le conocen como directivas de pre-procesador y se caracterizan por no consumir almacenamiento de memoria 
    a diferencia de la asignación directa de un valor a una variable o contstante. Cada directiva sirve de indetificador macro y simple-
    mente reemplaza el valor de la directiva por el valor especificado durante la compilación.*/


    printf("Imprimiendo variables %d,%d\n",x,y);
    printf("Imprimiendo constantes...:");
   //k = 10; intentando cambiar el valor de una constante lo cual genera un error. Puedes comprobarlo quitando los caracteres
   // de comentarios 
   printf("%d,%c",k,letter);

    return 0;

}