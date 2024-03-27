#include <stdio.h>

int isBelongToLanguageA(char str[]);
int isBelongToLanguageS(char str[]) {
    int i = 0;
        if (str[i] == '0') {
        i++;
        
        if (isBelongToLanguageA(str + i)) {
            // Check for '101'
            if (str[i] == '1' && str[i + 1] == '0' && str[i + 2] == '1') {
                i += 3; 
                                if (isBelongToLanguageA(str + i)) {
                    return 1; 
                }
            }
        }
    }

    return 0; 
}
int isBelongToLanguageA(char str[]) {
    if (str[0] == '\0') {
        return 1; 
    } else if (str[0] == '0' || str[0] == '1') {
        return isBelongToLanguageA(str + 1);
    } else {
        return 0; 
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isBelongToLanguageS(str)) {
        printf("The string belongs to the language.\n");
    } else {
        printf("The string does not belong to the language.\n");
    }

    return 0;
}
