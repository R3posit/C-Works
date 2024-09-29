#include <stdio.h>

//Chapter 2

int main() {
    int sayi;
    int a;
    int sonuc = 1;
    printf("Do you want to give me a number?\n");
    scanf("%d", &sayi);
    if(sayi < 0) return printf("Oh, please don't do that :C");
    for(a = 1; a <= sayi; a++) {
        sonuc *= a;
    }
    
    printf("%d", sonuc);
}
