#include <stdio.h>

int main() {
    int n = 5, a; // n shld be always greater than 2
    int arr[n];
    
    
    printf("give %d number\n", n);
    for(a = 0; a < n; a++) {
        scanf("%d", &arr[a]);
    }
    
    int *ptr1 = arr;
    int largest = *ptr1;
    int second_largest = *(ptr1 + 1);//largest and second largest set to first 2 numbers in array

    
    if (largest < second_largest) {
        int swap = largest;
        largest = second_largest;
        second_largest = swap;
    }

    for (a = 2; a < n; a++) { //after first 2 numbers are assigned loop starts from 3rd number
        ptr1 = &arr[a];
        
        if (*ptr1 > largest) {
            second_largest = largest;
            largest = *ptr1;
        } else if (*ptr1 > second_largest && *ptr1 != largest) {
            second_largest = *ptr1;
        }
    }

    printf("the largest number is %d\n", largest);
    printf("the second largest number is %d\n", second_largest);
    
    return 0;
}
