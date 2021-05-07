#include<stdio.h>

int main (){

    // This code is to show the different supported datatypes on C
    int x = 10; //integer variable
    float y = 2.1; // floating point number
    double z = 2.1; // floating point number with double precision
    char hello = 'a';  // single character. It must be writen between single quote marks
    
    printf("Printing variables...\n"); // it is necessary to use scape chracters to start a new line

    /*Depending of the datatype, scape characters are also used as placeholders. See more information
    at:https://en.wikipedia.org/wiki/Printf_format_string*/

    printf("%d\n",x); // decimal variable expected
    printf("%g\n",y); // double or float variable expected
    printf("%g\n",z); 
    printf("%c\n",hello); //char variable expected

    /* Addittionally, C offers a close relationship with hardware data. We can ask for the amount of
     bytes required to store each variable using the following instruction:*/

     int size1 = sizeof(x);
     int size2 = sizeof(y);
     int size3 = sizeof(z);
     int size4 = sizeof(hello);

     printf("Printing memory occupied by variables...\n");

    printf("Int bytes:%ld\n",size1); /* decimal variable expected. You can use ld as escape chatacter if you
    known beforehand the  number is a big one (also known as big format numbers)*/
    printf("Float bytes:%d\n",size2);
    printf("Double bytes:%d\n",size3);
    printf("Char bytes:%ld\n",size1); // this time there is no difference between %d abnd %ld
    
    return 0;

}