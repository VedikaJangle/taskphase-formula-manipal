#include <stdio.h>

int main() {
    int n, a, b, c;
    n = 5; 
    
    for (a = 1; a <= n; a++) {
        
        for (b = 1; b <= n - a; b++) { // space
            printf(" ");
        }
        
        for (c = 1; c <= 2 * a - 1; c++) { //star
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}
