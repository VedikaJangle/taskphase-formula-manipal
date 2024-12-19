#include <stdio.h>

int main() {
    int n = 5;
    int arr[n];

    printf("give numbers\n");
    for (int a = 0; a < n; a++) {
        scanf("%d", &arr[a]);
    }

    for (int a = 0; a < n - 1; a += 2) { //a+=2 will point only to even index and only till n-1 as there is no n+1 number
        int swap = *(arr + a);
        *(arr + a) = *(arr + a + 1);
        *(arr + a + 1) = swap;
    }


    printf("after swaping\n");
    for (int a = 0; a < n; a++) {
        printf("%d\t", *(arr + a));  
    }
    

    return 0;
}
