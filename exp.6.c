#include <stdio.h>
int isBelongToLanguage(char str[]) {
    int i = 0, count = 0;

    while (str[i] != '\0') {
        if (str[i] == '0') {
            count++;
            i++;
            while (str[i] == '0') {
                i++;
            }
            while (count > 0 && str[i] == '1') {
                count--;
                i++;
            }
        } else {
            return 0; 
        }
    }

    return count == 0; 
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isBelongToLanguage(str)) {
        printf("The string belongs to the language.\n");
    } else {
        printf("The string does not belong to the language.\n");
    }

    return 0;
}
