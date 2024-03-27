#include <stdio.h>
int simulateNFA(char str[]) {
    int currentState = 0; 

    for (int i = 0; str[i] != '\0'; i++) {
        char currentSymbol = str[i];

        switch (currentState) {
            case 0:
                if (currentSymbol == 'b') {
                    currentState = 1; 
                }
                break;

            case 1:
                if (currentSymbol == 'a') {
                    currentState = 2; 
                } else if (currentSymbol == 'b') {
                    currentState = 1;
                }
                break;

            case 2:
                break;
        }
    }

    return currentState == 2; 
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (simulateNFA(str)) {
        printf("The string is accepted by the NFA.\n");
    } else {
        printf("The string is not accepted by the NFA.\n");
    }

    return 0;
}
