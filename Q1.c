#include <stdio.h>

int main() {
    int a, b, c, total;
    int d = 1;
    int divisor; 


    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a,&b,&c);


    total = a + b + c;
    printf("The sum of the numbers is: %d\n", total);


    if (total % 2 == 0) {
        printf("The sum is even.\n");
    } 
    else {
        printf("The sum is odd.\n");
    }


    if (total > 1) {
        for (divisor = 2; divisor <= total / 2; divisor++) { 
            if (total % divisor == 0) {
                d = 0;
                break;
            }
        }
        if (d) {
            printf("The sum is a Prime number.\n");
        }
        else {
            printf("The sum is a Composite number.\n");
        }
    } 
    else {
        printf("The sum is neither Prime nor Composite.\n");
    }

    return 0;
}
