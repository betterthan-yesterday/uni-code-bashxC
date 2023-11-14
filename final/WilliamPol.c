#include <stdio.h>
#include <string.h>
#include <ctype.h>

int hasLowercase(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        if (islower(str[i]) && isalpha(str[i])) return 1;
    }
    return 0;
}

int hasUppercase(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        if (isupper(str[i]) && isalpha(str[i])) return 1;
    }
    return 0;
}

int hasDigit(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        if (isdigit(str[i])) return 1;
    }
    return 0;
}

int hasSpecialChar(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        if (!isdigit(str[i]) && !isalpha(str[i])) return 1;
    }
    return 0;
}

int evaluateStrength(char str[]) {
    if (strlen(str) > 11) return hasLowercase(str) + hasUppercase(str) + hasDigit(str) + hasSpecialChar(str) + 1;
    return hasLowercase(str) + hasUppercase(str) + hasDigit(str) + hasSpecialChar(str);
}

int main () {
    
    char option[1];
    
    do {
        printf("\nPassword Resilience Analyzer\n");
        printf("1. Test a new password\n");
        printf("2. View strength of last tested password\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%s", &option);
        
        if (!strcmp(option, "1")) {
            
            char pass[100];
            printf("Enter the password: ");
            scanf("%s", &pass);
            
            if (strlen(pass) < 8) {
                printf("Error: Password should be at least 8 characters long\n");
                continue;
            }
            
            printf("Password Strength: %d\n", evaluateStrength(pass));
            
        } else if (!strcmp(option, "2")) {
            continue;
        } else printf("Error: Invalid expression\n");
        
    } while (strcmp(option, "3"));
    printf("Exiting... ");

    return 0;
}

