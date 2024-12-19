#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h> //for rand func

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    
    printf("enter a string \n");
    fgets(str, 100, stdin); //scanf stops at space so used fgets


    
    for (int a = 0; str[a] != '\0'; a++) {
        char ch = str[a];
        ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;  // to lowercase

        // vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        // consonant
        else if ((ch >= 'a' && ch <= 'z')) {
            consonants++;
        }
    }

    
    printf("number of vowels %d\n", vowels);
    printf("number of consonants %d\n", consonants);

    // scramble 
    srand(time(0));  //time(0) sets the initial seq to 0 every time 
    int length = strlen(str); // strlen gives length of string with the null terminator
    for (int a = length - 1; a > 0; a--) { // starts from behind ignoring \0
        int b = rand() % (a + 1); // rand()%(a+1) generates random index b b/w 0 & a

        //swap
        char swap = str[a];
        str[a] = str[b];
        str[b] = swap;
    }

    
    printf("scrambled %s\n", str);

    return 0;
}
