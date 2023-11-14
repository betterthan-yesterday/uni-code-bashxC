#include <stdio.h>
#include <string.h>

int hasLowercase(char str[]) {
    
}

int hasUppercase(char str[]) {
    
}

int hasDigit(char str[]) {
    
}

int hasSpecialChar(char str[]) {
    
}

int evaluateStrength(char str[]) {
    return hasLowercase(str) + hasUppercase(str) + hasDigit(str) + hasSpecialChar(str) + strlen(str) > 11;
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
            printf("Enter the password (max 20 characters): ");
            scanf("%s", &pass);
            
            if (strlen(pass) < 8) printf("Error: Password should be at least 8 characters long\n");
            
            
            
        } else if (!strcmp(option, "2")) {
            continue;
        } else printf("Error: Invalid expression\n");
        
    } while (strcmp(option, "3"));
    printf("Exiting... ");

    return 0;
}

