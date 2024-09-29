#include <stdio.h>

//Chapter 3

int kerem;
int factorial_calculator(kerem) {
    int sonuc = 1; 
    int b;
    for (b = 1; b <= kerem; b++) {
        sonuc *= b;
    }
    return sonuc;
}

int main() {
    int sayi;

    printf("Hi, do you want to give me a number UWU?\n");
    scanf("%d", &sayi);

    if (sayi < 0) {
        printf("Factorial cannot be calculated for negative numbers.\n");
        return 1; 
    }

    int cevap = factorial_calculator(sayi);
    
    printf("%d! = %d\n", sayi, cevap);

    return 0;
}
