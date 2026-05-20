#include <stdio.h>
#include <math.h>

// ANSI Color Codes
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define RESET   "\033[0m"

int main() {
    float num1, num2;
    char operation, again;

    printf("\n");
    printf(BLUE "============================================\n" RESET);
    printf(YELLOW "   CODEALPHA -- ARITHMETIC CALCULATOR      \n" RESET);
    printf(BLUE "============================================\n" RESET);
    printf(RED "\n (In RED NOTE: For finding remainder, choose %% )\n" RESET);
    printf("--------------------------------------------\n");

    do {
        printf(GREEN "\n Enter Arithmetic Operation ( +, -, *, /, %% ) : " RESET);
        scanf(" %c", &operation);

        if (operation == '/') {
            printf(CYAN "\n Enter Numerator: " RESET);
            scanf("%f", &num1);
            printf(CYAN "\n Enter Denominator: " RESET);
            scanf("%f", &num2);
        } else {
            printf(GREEN "\n Enter First Number: " RESET);
            scanf("%f", &num1);
            printf(GREEN "\n Enter Second Number: " RESET);
            scanf("%f", &num2);
        }

        switch(operation) {
            case '+':
                printf("\n ADDITION : %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
                break;
            case '-':
                printf("\n SUBTRACTION : %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                break;
            case '*':
                printf("\n MULTIPLICATION : %.2f x %.2f = %.2f\n", num1, num2, num1 * num2);
                break;
            case '/':
                if (num2 == 0) {
                    printf(RED "\n SYNTAX ERROR!!! DIVISION BY ZERO!\n" RESET);
                } else {
                    printf("\n DIVISION : %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                }
                break;
            case '%':
                printf("\n REMAINDER : %.0f mod %.0f = %.0f\n", num1, num2, fmod(num1, num2));
                break;
            default:
                printf(RED "\n INVALID INPUT! TRY AGAIN...\n" RESET);
        }

        printf(GREEN "\n\n CONTINUE... YES (Y, y) or NO (N) ? " RESET);
        scanf(" %c", &again);

    } while(again == 'y' || again == 'Y');

    printf("\n");
    printf(BLUE "******************************************\n" RESET);
    printf(YELLOW "  CODEALPHA CALCULATOR SESSION ENDED\n" RESET);
    printf(BLUE "******************************************\n\n" RESET);

    return 0;
}
