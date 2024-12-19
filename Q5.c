#include <stdio.h>

int main() {
    int n = 5, a, b, c;
    int array[5]; 

  
    printf("give 5 numbers\n");
    for (a = 0; a < n; a++) {
        scanf("%d", &array[a]);
    }

    for (a = 0; a < n; a++) {
          for (b = 0; b < a; b++) {
            if (array[a] == array[b]) {
                for (c = a; c < n - 1; c++) {
                    array[c] = array[c + 1];
                }
                n--;  
                a--;
                break;
            }
        }
    }
    
    printf("array after removing same numbers\n");
    for (a = 0; a < n; a++) {
        printf("%d", array[a]);
    }

    return 0;
}
