#include <stdio.h>


int fibonacci(int n) {
    if (n <= 1) {
        return n;  //fibonacci(0) = 0, fibonacci(1) = 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); //recursive call
}

int main() {
    int n;

    printf("give n \n"); //n is term
    scanf("%d", &n);

    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));
    return 0;
}
