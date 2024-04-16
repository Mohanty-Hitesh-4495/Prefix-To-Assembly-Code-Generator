#include <stdio.h>
#include <string.h>

// Function to generate assembly code based on prefix expression
void generateAssemblyCode(char *expression) {
    char operator;
    int operand1, operand2;

    // Read operator and operands from expression
    if (sscanf(expression, " %c %d %d", &operator, &operand1, &operand2) == 3) {
        // Generate assembly code based on operator
        switch (operator) {
            case '+':
                printf("add eax, %d\n", operand1);
                printf("add eax, %d\n", operand2);
                break;
            case '-':
                printf("sub eax, %d\n", operand1);
                printf("sub eax, %d\n", operand2);
                break;
            case '*':
                printf("mov ebx, %d\n", operand1);
                printf("imul ebx, %d\n", operand2);
                printf("mov eax, ebx\n");
                break;
            case '/':
                printf("mov eax, %d\n", operand1);
                printf("cdq\n");  // Clear upper 32 bits of edx
                printf("idiv %d\n", operand2);
                break;
            default:
                printf("Invalid operator: %c\n", operator);
                break;
        }
    } else {
        printf("Invalid input format\n");
    }
}

int main() {
    char expression[100];

    // Read prefix expression from user
    printf("Enter a prefix expression (operator operand1 operand2): ");
    fgets(expression, sizeof(expression), stdin);

    // Remove newline character from expression
    size_t len = strlen(expression);
    if (len > 0 && expression[len - 1] == '\n') {
        expression[len - 1] = '\0';
    }

    // Generate and print assembly code
    generateAssemblyCode(expression);

    return 0;
}
