#include <stdio.h>
#include <stdbool.h>
bool simulateNFA(const char* input) {
    int currentState = 0;  

    for (int i = 0; input[i] != '\0'; ++i) {
        char symbol = input[i];

        if (currentState == 0 && symbol == 'o') {
            currentState = 1;  
        } else if (currentState == 1 && symbol == '1') {
            currentState = 1;  
        } else {
            currentState = 0;  
        }
    }

    return currentState == 1;  
}

int main() {
    printf("%s\n", simulateNFA("o1") ? "Accepted" : "Rejected");  
    printf("%s\n", simulateNFA("o0") ? "Accepted" : "Rejected");   
    printf("%s\n", simulateNFA("o101") ? "Accepted" : "Rejected"); 
    printf("%s\n", simulateNFA("oabc1") ? "Accepted" : "Rejected"); 

    return 0;
}
