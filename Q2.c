#include <stdio.h>

int main() {
    int hrs, mins, secs, inp_secs;

    printf("input seconds: ");
    scanf("%d", &inp_secs);

    hrs = inp_secs / 3600; 
    inp_secs %= 3600;

    mins = inp_secs / 60;
    secs = inp_secs % 60;

    printf("%d : %d : %d\n", hrs, mins, secs);

    return 0;
}
