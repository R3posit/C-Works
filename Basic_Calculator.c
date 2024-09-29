#include <stdio.h>

//  Chapter 1

int main() {
    int a;
    int b;
    int yanit;
    /*
    Warm-up XD
    */
    
    printf("Hello beauty, what’s the first number?\n");
    scanf("%d", &a);
    printf("Let’s get the second number:\n");
    scanf("%d", &b);
    printf("Now, let’s get the type of operation:\n");
    printf(" 1: Addition\n 2: Subtraction\n 3: Multiplication\n 4: Division\n");
    scanf("%d", &yanit);
    if(yanit == 1) {
        printf("THE SUM OF THE NUMBERS YOU ENTERED: %d\n", a + b);
    } else if(yanit == 2) {
        printf("THE DIFFERENCE OF THE NUMBERS YOU ENTERED: %d\n", a - b);
    } else if(yanit == 3) {
        printf("THE PRODUCT OF THE NUMBERS YOU ENTERED: %d\n", a * b);
    } else if(yanit == 4) {
        // I converted it to float here because I want a float XD
        printf("THE DIVISION OF THE NUMBERS YOU ENTERED: %f\n", (float)a / b);
    } else {
        printf("You entered an invalid operation... The program has ended!");
        return 0;
    }

}
