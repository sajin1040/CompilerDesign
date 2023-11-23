#include <stdio.h>
#include <ctype.h>
#include <string.h>

enum TokenType {
    KEYWORD,
    IDENTIFIER,
    INTEGER,
    INVALID
};


void recognizeToken(char* token) {
    if (strcmp(token, "if") == 0 || strcmp(token, "else") == 0) {
        printf("Token: %s (Type: KEYWORD)\n", token);
    } else if (isalpha(token[0])) {
        printf("Token: %s (Type: IDENTIFIER)\n", token);
    } else if (isdigit(token[0])) {
        printf("Token: %s (Type: INTEGER)\n", token);
    } else {
        printf("Token: %s (Type: INVALID)\n", token);
    }
}

int main() {
    char input[100];
    printf("Enter code: ");
    fgets(input, sizeof(input), stdin);

    char* token = strtok(input, " \t\n");
    
    while (token != NULL) {
        recognizeToken(token);
        token = strtok(NULL, " \t\n");
    }

    return 0;
}

