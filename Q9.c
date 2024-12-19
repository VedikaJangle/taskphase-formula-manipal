#include <stdio.h>

int main() {
    int matrix[4][4], sum = 0, primary_diagonal = 0, secondary_diagonal = 0;
    int a, b;


    printf("enter numbers for matrix\n");
    for (a = 0; a < 4; a++) {
        for (b = 0; b < 4; b++) {
            scanf("%d", &matrix[a][b]);
            sum += matrix[a][b];
            if (a == b) primary_diagonal += matrix[a][b];       
            if (a + b == 3) secondary_diagonal += matrix[a][b]; 
        }
    }

   
    printf("matrix\n");
    for (a = 0; a < 4; a++) {
        for (b = 0; b < 4; b++) {
            printf("%d ", matrix[a][b]);
        }
        printf("\n");
    }

  
    printf("sum of all numbers: %d\n", sum);
    printf("sum of primary_diagonal: %d\n", primary_diagonal);
    printf("sum of secondary_diagonal: %d\n", secondary_diagonal);

    return 0;
}
