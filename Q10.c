#include<stdio.h>
int main() {
    int n = 5, a, b, sort, swap;
    int search, low, mid, high;

    int array[n];

    printf("give numbers:\n");
    for (a = 0; a < n; a++)
    {
        scanf("%d", &array[a]);
    }

    printf("1)bubble sort or 2)selection sort\n");
    scanf("%d", &sort);

    if (sort == 1) //bubble
    {
        for (a = 0; a < n - 1; a++) {
            for (b = 0; b < n - a - 1; b++){
                 if (array[b] > array[b + 1]) {
                    swap = array[b];
                    array[b] =array[b + 1];
                    array[b + 1] = swap;
                 }
            }
        
        }
        printf("bubble sorted\n");
    }
    else if(sort == 2) { //selection 
        for (a = 0; a < n - 1; a++) {
            int smallest = a;
            for(b = a + 1; b < n; b++){
                if (array[b] < array[smallest]){
                    smallest = b;
                }
            }
            swap = array[a];
            array[a] = array[smallest];
            array[smallest] = swap;
        }

    } 
    else{
        printf("you entered a number other than 1 or 2\n");
        return 1;
    }
    

    
    for (a = 0; a < n; a++) {  //sorted array
        printf("%d ", array[a]);
    }

    //binary search
    printf("enter number to search\n");
    scanf("%d", &search);

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high)/2;
        if (array[mid] == search){
            printf("number found at %d \n", mid);
            break;
        }
        else if (array[mid] < search){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    

    return 0;
}