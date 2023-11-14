#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function Declaration
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
    char* eval;
    
    do {
        // Main Menu
        printf("\nPassword Resilience Analyzer\n");
        printf("1. Test a new password\n");
        printf("2. View strength of last tested password\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%s", &option);
        
        // Menu navigation
        if (!strcmp(option, "1")) { // Password testing
            
            char pass[100];
            printf("Enter the password: ");
            scanf("%s", &pass);
            
            // Check for adequate length
            if (strlen(pass) < 8) {
                printf("Error: Password should be at least 8 characters long\n");
                continue;
            }
            
            // Evaluate strength
            switch (evaluateStrength(pass)) {
                case 0: 
                    eval = "Weak";
                    break;
                case 1: 
                    eval = "Weak";
                    break;
                case 2: 
                    eval = "Weak";
                    break;
                case 3: 
                    eval = "Moderate";
                    break;
                case 4: 
                    eval = "Moderate";
                    break;
                case 5: 
                    eval = "Strong";
                    break;
            }
            
            printf("Password Strength: %s\n", eval);
            
        } else if (!strcmp(option, "2")) printf("Last tested password strength: %s\n", eval); // See last password strength
        else printf("Error: Invalid expression\n"); // Invalid expression
        
    } while (strcmp(option, "3")); // Check for exit option
    printf("Exiting... ");

    return 0;
}

