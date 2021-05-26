#include <stdio.h>

int main() {
    float price = 6.50;
    int increase = 2;
    float new_price;
    float average;
    int total = 23;
    int count = 4;


    new_price = price + increase;
    printf("New price is %4.2f", new_price);
    /* Output: New price is 8.50 */

    average = (float) total / count;
    
    printf("%4.2f", average);


    return 0;
}