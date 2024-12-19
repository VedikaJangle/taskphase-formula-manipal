#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int character_count = 0, word_count = 0, line_count = 0;
    int in_word = 0;

    
    file = fopen("input.txt", "r"); // readmode
    
    if (file == NULL) {
        printf("can't open file\n");
        return 1;
    }
 
    
    while ((ch = fgetc(file)) != EOF) { // eof = end of file
        character_count++; 

        if (ch == '\n') {
            line_count++;
        }

        
        if (isspace(ch)) { //space or not
            if (in_word) {
                word_count++; 
                in_word = 0;
            }
        } else {
            in_word = 1;
        }
    }

    if (in_word) {
        word_count++;
    }

    
    fclose(file);

    
    printf("characters = %d\n", character_count);
    printf("words = %d\n", word_count);
    printf("lines = %d\n", line_count);

    return 0;
}
