#include <stdio.h>

int main() {
    int units = 350;
    float bill = 0;

    if (units <= 100) {
        bill = units * 5; 
    }     
    if (units > 100 && units <= 300) {
        bill = (100 * 5) + (units - 100) * 8; 
    } 
    if (units > 300) {
        bill = (100 * 5) + (200 * 8) + (units - 300) * 10; 
    }


    printf("electricity bill is : %f\n", bill);

    return 0;
}
