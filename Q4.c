#include <stdio.h>
#include <string.h>

int main() {
    char correct_password[] = "manipal99"; //size of array is undefiened . but is number of char + 1 as there is a null terminator \0
    char entered_password[100];
    

    for (int attempts = 0; attempts <= 3; attempts++) {
        printf("password: ");
        scanf("%s", entered_password);

        if (strcmp(entered_password, correct_password) == 0) { // strcmp compares ascii values until a difference is found
            printf("logged in\n");
            return 0;  
        } else {
            printf("wrong password you have %d attempts left\n", 2 - attempts);
        }
    }

    printf("you have used 3 attempts\n");
    return 1;
}
