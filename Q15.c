#include <stdio.h>
#include <string.h>


void compressString(char *str, int index, char *result, int *result_index) {
    if (str[index] == '\0') {
        result[*result_index] = '\0'; 
        return;
    }

    char current_char = str[index];
    int count = 1;

    
    while (str[index + count] == current_char) {
        count++;
    }

    
    result[*result_index] = current_char;
    (*result_index)++;

    
    if (count > 1) {
        result[*result_index] = count + '0'; 
        (*result_index)++;
    }

    
    compressString(str, index + count, result, result_index);
}

int main() {
    char str[100], result[200];
    int result_index = 0;

    printf("string = \n");
    scanf("%s", str);

    compressString(str, 0, result, &result_index);

    printf("compressed string = \n%s\n", result);
    return 0;
}
